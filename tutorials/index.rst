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

The overall purpose of the Citizen Science tutorial notebooks is to guide Rubin scientists through the process of creating a Zooniverse project and retrieving the classifications.
Below we describe the purpose of each individual notebook.

`Citizen Science notebooks GitHub repository <https://github.com/lsst-epo/citizen-science-notebooks>`_



++++++++++++++++++++++++++++++++++++++
Introduction to Rubin citizen science
++++++++++++++++++++++++++++++++++++++

**Notebook:** ``01_Introduction_to_Citsci_Pipeline.ipynb``  

This is our recommended starting notebook.
It guides a PI through the process of creating a Zooniverse project, sending data (specifically images) from the Rubin Science Platform (RSP) to the Zooniverse, and retrieving raw classifications from Zooniverse.

+++++++++++++++++++++++++++++++++++++++
Create an image flipbook on Zooniverse
+++++++++++++++++++++++++++++++++++++++

**Notebook:** ``02_Send_Flipbook_Variable_Stars_Imaging.ipynb``  

This notebook demonstrates how to query and send a flipbook of variable star images from the RSP to Zooniverse.
A flipbook is a collection of multiple images, which could be useful for tracking and identifying sources at the same location that change with time.
For example, this notebook examines variable stars, which change brightness with time.

+++++++++++++++++++++++++++++++++++++++++++++++++++++++
Download and aggregate Zooniverse user classifications
+++++++++++++++++++++++++++++++++++++++++++++++++++++++

**Notebook:** ``03_Aggregate_Classifications.ipynb``  

This notebook guides a PI through the process of retrieving and aggregating classification data from Zooniverse.
Aggregation is the process of combining classifications.
In this case, application means grouping classifications by task and user. 
We select the most recent classification from each user and use the Zooniverse `question_consesus_reducer` function to determine the consensus for each subject ID amongst all users.
It builds upon the example of retrieval in the first tutorial notebook, this time demonstrating how to aggregate the raw user classifications.