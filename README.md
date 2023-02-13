Title:Development of an MRI-based neural network meniscus-cartilage radiomic model to predict the incidence of radiographic knee osteoarthritis
Source code for the neural network predictive model
Authors:Shengfa Li, Jia Li, Peihua Cao, Tianyu Chen, Ping Luo, Guangfeng Ruan, Yan Zhang, Xiaoshuai Wang, Weiyu Han, Zhaohua Zhu, Qin Dang, Qianyi Wang, Mengdi Zhang, Qiushun Bai, Alexander Tack, David J Hunter, and Changhai Ding
About
What's included in this Repo
The repository includes the codes for data / label preparation and inferencing the future knee radiographic osteoarthritis, training and testing the baseline pre-radiographic MRI-based radiomic features and also the links to the pre-trained generative model.

Focus of the current work
Due to its slow progression and irreversible structural changes, early intervention is crucial for osteoarthritis, which has no disease-modifying treatment. According to estimates, OA will become one of the most prevalent diseases in populations in high-income countries, and the medical costs associated with it will account for between 1% and 2.5% of the gross domestic product of these countries by the end of this century. To this end, we developed the first pre-radiographic multi-structure radiomic model (MS-RM) in the Osteoarthritis Initiative cohort. MS-RM integrates meniscus and femorotibial cartilage radiomic features and accurately predicts radiographic KOA using a neural network.

Requirements
JMP pro 16

How to predict the future state of a knee
Preparing the training data and labels
Download all available OAI MR images from https://nda.nih.gov/oai/. The access to the images is free and painless. You just need to register and provide the information about yourself and agree with the terms of data use. Besides, please also download the label files named Semi-Quant_Scoring_SAS from OAI.
This study used the Pivotal OAI MR Imaging Analyses incidental OA (POMA_incOA) cohort study. The POMA incident OA cohort was selected as a nested case-control analysis. Both case and control knees were enrolled without radiographic KOA (KLG < 2) at baseline but at an increased risk of radiographic KOA. The flowchart and details of participant inclusion and exclusion criteria have been described as follow figure.
![image](https://user-images.githubusercontent.com/86773182/218366428-208a8387-c3e5-4149-8b45-67d32a28f522.png)
Training a CNN model on radiological data
Our team used convolutional neural networks (CNNs) were used to automatically segment MRI into four anatomical structures (femoral and tibial cartilages, and both meniscus (Ref: Tack A, Ambellan F, Zachow S. Towards novel osteoarthritis biomarkers: Multi-criteria evaluation of 46,996 segmented knee MRI data from the Osteoarthritis Initiative. PLoS One. 2021 Oct 21;16(10):e0258855. doi: 10.1371/journal.pone.0258855. PMID: 34673842; PMCID: PMC8530341).
![image](https://user-images.githubusercontent.com/86773182/218366522-ddc9eadc-292b-4ca7-b23b-32cf935d3656.png)
![image](https://user-images.githubusercontent.com/86773182/218366535-b8efa522-9c92-4d0c-838d-ef5578b0d3a3.png)
![image](https://user-images.githubusercontent.com/86773182/218366547-d14cfc1c-1431-4cb4-ba57-0931a5e646cd.png)
We use previous studies automatically segment femoral and tibial cartilages (Ref: Ambellan F, Tack A, Ehlke M, Zachow S. Automated segmentation of knee bone and cartilage combining statistical shape knowledge and convolutional neural networks: Data from the Osteoarthritis Initiative. Med Image Anal. 2019 Feb;52:109-118. doi: 10.1016/j.media.2018.11.009. Epub 2018 Nov 17. PMID: 30529224.).
We use previous studies automatically segment lateral and medial cartilages (Ref: Tack A, Mukhopadhyay A, Zachow S. Knee menisci segmentation using convolutional neural networks: data from the Osteoarthritis Initiative. Osteoarthritis Cartilage. 2018 May;26(5):680-688. doi: 10.1016/j.joca.2018.02.907. Epub 2018 Mar 9. PMID: 29526784.)
Clinical outcome
The clinical outcome was incident radiographic KOA, defined as the first occurrence of radiographic findings compatible with radiographic KOA (KLG ≥ 2) during the study. Case knees developed radiographic KOA on knee radiographs during the 4-year follow-up. The control knees were selected from knees that did not develop radiographic KOA from baseline to 4 years.
Model development and validation
A total of 710 knees were identified from the POMA_incOA cohort study. After excluding 24 knees with non-conforming MRI, the remaining 686 eligible knees were randomly split into two cohorts (training cohort/validation cohort=8/2) using 4-fold cross-validation (repeat 2000 times). The first 549 knees (275 cases vs. 274 controls) and the remaining 137 knees (68 cases vs. 69 controls) were allocated to the training and validation cohort, respectively.
Radiomic features extration and slection
We used Pyradiomics package (version 2022.1) to extract the radiomic features of sagittal 3-dimensional double echo steady-state with selective water excitation (3D-DESS-SWE) images. We extracted 3332 radiomic MRI features from the above-segmented intra-articular volume of interests (VOIs) with 833 radiomic features per segmentation. Then, using least absolute shrinkage and selection operator (LASSO) logistic regression, 35 FC features, 12 TC features, 15 LM features, and 40 MM features remained. Based on the remaining 102 features of the four VOIs (FC, TC, LM, and MM), 52 features with non-zero coefficients were distilled using LASSO logistic regression. 
Model development and validation
Using a neural network algorithm, 35 of FC, 12 of TC, 15 of LM, 40 of MM, and 52 of multi-structure features were used to construct the predictive radiomic models, including femoral cartilage radiomic model (FC-RM), tibia cartilage radiomic model (TC-RM), lateral meniscus radiomic model (LM-RM), medial meniscus radiomic model (MM-RM), and MS-RM, respectively.
An accessible introduction to develop neural network can be found in previous research (Ref: Hastie, T., Tibshirani, R., Friedman, J. H. & Friedman, J. H. The elements of statistical learning: data mining, inference, and prediction. Vol. 2 (Springer, 2009).). In this work, the activation function was TanH. It transforms values between -1 and 1. TanH is a logistic function that is transformed by a centralized and uniform scale. TanH is defined as:
(e^2x-1)/(e^2x+1)
x is a linear combination of radiomic features.
The outcome, y, takes on values 0 (non-OA), 1 (OA). Under the parameterization of the multinomial distribution using the canonical log odds parameter:
{θ_j }  (k-1)¦(j=1)
the loglikelihood is:
L_Multinomial=∑_(j=1)^(k-1)▒〖I(y_i=j) θ_j+log⁡〖(1+∑_(j=1)^(k-1)▒e^(θ_j ) )〗 〗
where I(y_i=j) is the indicator function of the event that y_i=j. The neural model is such that each θ_j is a linear combination of the uppermost hidden layer nodes and the set of parameters that correspond to θ_j plus an intercept type parameter. In this way, the prediction formula of the probability that y_i=j, f_j, is:
f_j=e^(θ_j )/(1+∑_(j'=1)^(k-1)▒e^(θ_j )')
for j < k, and:
f_k=e^(θ_j )/(1+∑_(j'=1)^(k-1)▒e^(θ_j )')
For testing purposes, one can find the θ parameters from the prediction probabities using the relation, θ_j=log⁡〖(f_j)-log⁡〖(f_k)〗 〗. For the r^2 statistics for ouotcome, the null model is the one where f_j (x_i)=(p_j ) ̂ for all i, where (p_j ) ̂ is the sample proportion of observations where y_i=j. 
![image](https://user-images.githubusercontent.com/86773182/218367584-fa3d8d41-73f0-459d-bd34-f7ba107e8efa.png)



  
