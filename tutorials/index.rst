.. Review the README on instructions to contribute.
.. Review the style guide to keep a consistent approach to the documentation.
.. Static objects, such as figures, should be stored in the _static directory. Review the _static/README on instructions to contribute.
.. Do not remove the comments that describe each section. They are included to provide guidance to contributors.
.. Do not remove other content provided in the templates, such as a section. Instead, comment out the content and include comments to explain the situation. For example:
    - If a section within the template is not needed, comment out the section title and label reference. Do not delete the expected section title, reference or related comments provided from the template.
    - If a file cannot include a title (surrounded by ampersands (#)), comment out the title from the template and include a comment explaining why this is implemented (in addition to applying the ``title`` directive).

.. This is the label that can be used for cross referencing this file.
.. Recommended title label format is "Directory Name"-"Title Name" -- Spaces should be replaced by hyphens.
.. _Tutorials-Tutorials:
.. Each section should include a label for cross referencing to a given area.
.. Recommended format for all labels is "Title Name"-"Section Name" -- Spaces should be replaced by hyphens.
.. To reference a label that isn't associated with an reST object such as a title or figure, you must include the link and explicit title using the syntax :ref:`link text <label-name>`.
.. A warning will alert you of identical labels during the linkcheck process.

#########
Tutorials
#########

.. This section should provide a brief, top-level description of the page.

These tutorial notebooks guide Rubin scientists through the process of creating a Zooniverse project and retrieving classifications.
The purpose of each individual notebook is outlined below.

`Citizen Science notebooks GitHub repository <https://github.com/lsst-epo/citizen-science-notebooks>`_

++++++++++++++++++++++++++++++++++++++
Introduction to Rubin Citizen Science
++++++++++++++++++++++++++++++++++++++

**Notebook:** ``01_Introduction_to_Citsci_Pipeline.ipynb``  

Start with this notebook to learn how to create a Zooniverse project with Rubin, send images from the Rubin Science Platform (RSP) to Zooniverse, and retrieve raw classifications.

+++++++++++++++++++++++++++++++++++++++
Create an Image Flipbook on Zooniverse
+++++++++++++++++++++++++++++++++++++++

**Notebook:** ``02_Send_Flipbook_Variable_Stars_Imaging.ipynb``  

Use this notebook to query and send a flipbook of variable star images from the RSP to Zooniverse.
A flipbook is a collection of multiple images, useful for tracking and identifying sources at the same location that change over time.
This notebook focuses on variable stars, which exhibit brightness variations.

+++++++++++++++++++++++++++++++++++++++++++++++++++++++
Download and Aggregate Zooniverse User Classifications
+++++++++++++++++++++++++++++++++++++++++++++++++++++++

**Notebook:** ``03_Aggregate_Classifications.ipynb``  

Use this notebook to retrieve and aggregate classification data from Zooniverse.
This tutorial aggregates (or combines) user classifications by grouping them by task and user.
It selects the most recent classification from each user and applies Zooniverse's `question_consensus_reducer` function to determine consensus for each subject ID.
This notebook builds on the retrieval process demonstrated in the first tutorial and extends it to aggregating raw user classifications.





