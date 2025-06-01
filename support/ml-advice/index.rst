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

.. - Purpose of this page
The goal of this page is to provide background, references, and advice for Rubin users who would like to use artificial intelligence (AI) -- otherwise known as machine learning (ML) -- within or alongside their citizen science (CS) research workflows. AI and CS are overlapping and complementary procedures for rapidly assessing (typically, classifying) scientific data. They have similar and unique pros and cons, and there are multiple ways to use these two methods in concert to improve the quality of your scientific results. 

.. - Zooniverse is the main mechanism for active learning
.. - Rubin offers tutorials for other mechanisms



Roles and paths for integrating AI with Citizen Science
=======================================================

- Similarities between humans and machines in the classification process:
    - can be considered black boxes, where interpretability of choices is possible but limited
    - classification probabilities must be calibrated to remove bias
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
