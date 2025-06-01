.. Review the README on instructions to contribute.
.. Review the style guide to keep a consistent approach to the documentation.
.. Static objects, such as figures, should be stored in the _static directory. Review the _static/README on instructions to contribute.
.. Do not remove the comments that describe each section. They are included to provide guidance to contributors.
.. Do not remove other content provided in the templates, such as a section. Instead, comment out the content and include comments to explain the situation. For example:
    - If a section within the template is not needed, comment out the section title and label reference. Do not delete the expected section title, reference or related comments provided from the template.
    - If a file cannot include a title (surrounded by ampersands (#)), comment out the title from the template and include a comment explaining why this is implemented (in addition to applying the ``title`` directive).

.. This is the label that can be used for cross referencing this file.
.. Recommended title label format is "Directory Name"-"Title Name" -- Spaces should be replaced by hyphens.
.. _Resources-ML-Advice:
.. Each section should include a label for cross referencing to a given area.
.. Recommended format for all labels is "Title Name"-"Section Name" -- Spaces should be replaced by hyphens.
.. To reference a label that isn't associated with an reST object such as a title or figure, you must include the link and explicit title using the syntax :ref:`link text <label-name>`.
.. A warning will alert you of identical labels during the linkcheck process.

################################################################################
Considerations for integrating AI with Citizen Science in Rubin
################################################################################

*Advice, resources, and best practices for the integration of machine learning techniques into Citizen Science projects to be added here.*



Overview
========

.. Purpose
The goal of this page is to provide background, references, and advice for Rubin users who would like to use artificial intelligence (AI) -- otherwise known as machine learning (ML) -- within or alongside their citizen science (CS) research workflows. AI and CS are overlapping and complementary procedures for rapidly assessing (typically, classifying) scientific data. They have similar and unique pros and cons, and there are multiple ways to use these two methods in concert to improve the quality of your scientific results. In addition to this advice, Rubin CS offers tutorials for CS in Rubin and expedited access to the Zooniverse CS platform, and Rubin CST offers tutorials on AI. We recommend studying AI, including performing your own small computational studies, before embarking on a CS project that integrates AI. 

Almost all of the discussion on this page is in terms of classification tasks; we will use the specific task of classifying 'stars' and 'galaxies' as an example when needed. Additionally, our discussion will focus on classifying images, as this is the most widespread application of both AI and CS. When referring to 

.. - Zooniverse is the main mechanism for active learning .. .this will go in resources
.. - Rubin offers tutorials for other mechanisms .. this will go in resources.



Comparing AI and CS
=======================================================

AI and CS have multiple similarities and differences. Identifying these items for your project is important for determining the best use of AI in your Rubin CS project. 


Similarities
------------

The similarities between AI and CS include:

- Both methods take large sets of input data and output a classification score for each object in the set. The output scores are not inherently probabilistic, but they can be calibrated to be nearly probabilistic.
- To an approximation, they can both be treated as ''black boxes'' because it remains an active area of research to interpret the ''reasons'' that an algorithm or a human would classify an object. Using statistical metrics helps in both cases, but definitively determining the reasons remains elusive.
- Despite being black boxes, the problem or question must be carefully and specifically designed for AI algorithms and CS projects.
- The data must be carefully prepared, for example, by normalizing images.
- Though they do it in different ways, both methods can classify large numbers of complex inputs (like images) more efficiently and more reliably than an individual performing a manual investigation of the data. 
- Both approaches require training. An AI model must be numerically trained on example data that has pairs of images and classifications. In a CS project, volunteers must be taught about the subject matter and provided with example pairs of images and their corresponding true classifications.
- Both AI and CS approaches are advanced fields of research, and there are experts in both fields; that expertise is very important for a successful Rubin CS project.


Differences
-----------
- CS volunteers typically have a personal investment in their classification task. Downstream, this leads to interactions between scientists and volunteers being critical for the motivation of the volunteers.
- AI models can be rapidly retrained and redeployed on the same dataset. This means that an AI model can be refined multiple times on a training set before being applied to a new dataset. Relatedly, the probabilities and uncertainties of the classification can be refined.
- CS volunteers rarely repeat their work on the same dataset. Downstream, this requires careful timing in deploying the CS project and sharing it with the public.
- AI models require access to relatively significant computational resources -- i.e., graphical processing units (GPUs).
- 


Three Typical Pathways for Integrating AI and CS
================================================
- Reciprocal/complementary roles of humans and machines in classifications. Pro's/con's, strengths/weaknesses of each.
- Mechanisms/pathways
    - Humans prepare data for machines: it is common for citizen science projects to use human-labeled data as a way to train machine learning algorithms
    - Machines prepare data for humans: Unsupervised learning and domain adaptation methods are well-suited for labeling new data. Humans are then often useful
    - Hybrid -- human-machine active learning loop: 



Typical steps for implementing AI with Citizen Science
=============================================================

1. Establish a clear question or problem -- e.g., classify a kind of object
2. Study and prepare data: create classes and make sure there are enough 
3. Obtain classifications from one kind of classifier (CS volunteers or AI model)
4. Send labels to the other kind of classifier 



Potential and pitfalls of AI
=============================================================

- Interpretability
- Taking up space from humans
- Requires large amounts of data



Selected papers at the intersection of AI and Citizen Science
=============================================================

- Zoobot (cite)
- Gravity spy (cite)
- Space Warps (cite)
- Galaxy Zoo (cite)
- Dark Energy explorers (cite)
- Planet hunters (cite)
- Supernova hunters



Selected papers and resources for AI and data science 
=============================================================

- Karpathy's recipe for neural networks
- Kim and ?? on neural networks for star-galaxy separation
- Dieleman et al., 2018 on galaxy morphologies
- Jacobs et al., strong lensing in DES



Glossary of Terms for AI 
=============================================================

- Supervised learning
- Unsupervised learning
- Reinforcement learning
- Active learning
- Human in the loop
- Foundation models
- Domain shift
- Neural networks
- Calibration



Codebases for AI
=============================================================

- Scikit Learn
- Pytorch
- Tensorflow



Open Questions when integrating AI and CS
=============================================================

- How do humans learn differently when interacting with AI in an active learning loop?
- How do errors propagate from imperfectly labeled data to another classification box?
- What is the most efficient and statistically principled way to update active learning targets?



Recommendations when integrating AI and Citizen Science
=============================================================
- This is not a chatbot interaction; it's longer-term.
- Be honest and forthright with the CS volunteers.
- Pre-stablish principled statistical metrics for evaluating and calibrating classification outputs.
- Familiarize yourself with ML tools. Practice with tutorials. Read the foundational papers.
- Suit the algorithm directly to the task



Related tutorials
=============================================================
- Basics of AI for images (link)
- Basics of AI with tabular data (TBD)
- Basics of AI for images with Rubin simulations (TBD)
