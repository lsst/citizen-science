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
.. A warning will alert you if identical labels during the linkcheck process.

######################################################
Considerations for Integrating AI with Citizen Science
######################################################


Overview
========

.. Purpose
The goal of this page is to provide background, references, and advice for Rubin users who would like to use artificial intelligence (AI) -- otherwise known as machine learning (ML) -- within or alongside their citizen science (CS) research workflows. 
AI and CS are overlapping and complementary procedures for rapidly assessing (typically, classifying) scientific data. 
They have similar and unique pros and cons, and there are multiple ways to use these two methods in concert to improve the quality of your scientific results. 
In addition to this advice, there are tutorials for doing citizen science tutorials.
It is recommended that you study basic AI principles and methods, including performing your own small computational studies, before embarking on a CS project that integrates AI. 

.. Context for the rest
Almost all of the discussion on this page is in terms of classification tasks; 
it will consider the specific task of classifying 'stars' and 'galaxies' as an example when needed. 
Additionally, this discussion will focus on classifying images, because this is the most common application of both AI and CS. 




Comparing AI and CS
===================

AI and CS have multiple similarities and differences. 
Identifying these items for your project is important for determining the best use of AI in your Rubin CS project. 


Similarities
------------

The similarities between AI and CS include the following:

- Both methods take large sets of input data and output a classification score for each object in the set. The output scores are not inherently probabilistic, but they can be calibrated to be nearly probabilistic.
- To an approximation, they can both be treated as "black boxes" because it remains an active area of research to interpret the "reasons" that an algorithm or a human would classify an object. Using statistical metrics helps in both cases, but definitively determining the reasons remains elusive.
- Despite being black boxes, the problem or question must be carefully and specifically designed for AI algorithms and CS projects.
- The data must be carefully prepared, for example, by normalizing images.
- Though they do it in different ways, both methods can classify large numbers of complex inputs (like images) more efficiently and more reliably than an individual performing a manual investigation of the data. 
- Both approaches require training. An AI model must be numerically trained on example data that has pairs of images and classifications. In a CS project, volunteers must be taught about the subject matter and provided with example pairs of images and their corresponding true classifications.
- Both AI and CS approaches are advanced fields of research, and there are experts in both fields; that expertise is very important for a successful Rubin CS project.
- Both methods can be applied to a wide variety of data across many areas of research and industry -- natural images, climate, biology, medicine, etc.


Differences
-----------
- CS volunteers typically have a personal investment in their classification task. Downstream, this leads to interactions between scientists and volunteers being critical for the motivation of the volunteers.
- AI models can be rapidly retrained and redeployed on the same dataset. This means that an AI model can be refined multiple times on a training set before being applied to a new dataset. Relatedly, the probabilities and uncertainties of the classification can be refined.
- CS volunteers rarely repeat their work on the same dataset. Downstream, this requires careful timing in deploying the CS project and sharing it with the public.
- AI models require access to relatively significant computational resources -- i.e., graphical processing units (GPUs).
- AI requires a relatively high amount of data for training the algorithm, while very little is necessary for a CS approach.
- CS volunteers are typically more skilled in cases where it is difficult to discern between two classes.



When is each approach most optimal?
===================================

We delineate circumstances and characteristics of problems that suggest that a particular method (AI or CS) will be more beneficial for a project.


You probably want to use AI if ...
----------------------------------
- There is a lot of data (e.g., at least 1,000 objects/images per class); this can be simulated or real observed data.
- You can simulate the data for objects with reasonable fidelity -- get most of the details.
- The morphological features that indicate a particular class are more obvious than not to the human eye.
- The classes are already clearly identified and well understood: you know what you're looking for.
- No classes are well-identified: anomaly detection, like with principal component analysis (PCA).
- You are seeking to classify many millions of objects.


You probably want to use CS if ...
----------------------------------
- There is not a lot of data (e.g., only a few objects/images per class); this can be simulated or real observed data.
- The morphological features that indicate a particular class are difficult to distinguish.
- If you tried AI, and it didn't work.
- The classes are not yet defined, and it's not obvious what you're looking for: you're looking for something new and different.
- Some classes were not well identified in the AI algorithm that you already tried.
- No classes are well identified: anomaly detection.
- You are seeking to classify fewer than a million objects.


Three Typical Pathways for Integrating AI and CS
================================================

There are three typical pathways for combining AI and CS.

1. **Human classifiers prepare data for AI classifiers.** When there is not enough training data for an AI model, human classifiers can perform the initial labeling. This is a common tactic in industry applications. 

2. **AI classifiers prepare data for humans.** When there is a wealth of data for supervised training of an AI model, but the model persistently struggles to discern certain classes (resulting in false positives and false negatives), it may be appropriate to send this data to CS volunteers for their more nuanced perspective. 
If there isn't much training data, a clustering method (e.g., k-means clustering or autoencoders) can be used to provide an initial, coarse-grained classification of the data, which can then be sent to CS volunteers.
