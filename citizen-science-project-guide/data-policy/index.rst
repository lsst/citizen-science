.. Review the README on instructions to contribute.
.. Review the style guide to keep a consistent approach to the documentation.
.. Static objects, such as figures, should be stored in the _static directory. Review the _static/README on instructions to contribute.
.. Do not remove the comments that describe each section. They are included to provide guidance to contributors.
.. Do not remove other content provided in the templates, such as a section. Instead, comment out the content and include comments to explain the situation. For example:
    - If a section within the template is not needed, comment out the section title and label reference. Do not delete the expected section title, reference or related comments provided from the template.
    - If a file cannot include a title (surrounded by ampersands (#)), comment out the title from the template and include a comment explaining why this is implemented (in addition to applying the ``title`` directive).

.. This is the label that can be used for cross referencing this file.
.. Recommended title label format is "Directory Name"-"Title Name" -- Spaces should be replaced by hyphens.
.. _Citizen-Science-Project-Guide-Project-Guide:
.. Each section should include a label for cross referencing to a given area.
.. Recommended format for all labels is "Title Name"-"Section Name" -- Spaces should be replaced by hyphens.
.. To reference a label that isn't associated with an reST object such as a title or figure, you must include the link and explicit title using the syntax :ref:`link text <label-name>`.
.. A warning will alert you of identical labels during the linkcheck process.

###########
Data Policy
###########

This section describes how Rubin data can be used for citizen science projects with Rubin Observatory data in conjunction with the Zooniverse. It is the responsibilty of the project team to make sure their project is in accordance with Rubin's Data policy (`RDO-013 <https://docushare.lsst.org/docushare/dsweb/Get/RDO-013>`_), however the CitSci team is available to help and can answer inquiries regarding data for specific projects. The following sections are intending to provide general support for common data types for projects.

Proprietary
===========

Data released as part of Rubin’s annual data releases are proprietary for two years, as are the prompt-processed visit-images and difference-images (Section 5.1 of RDO-013). Citizen science projects are publicly hosted on the Zooniverse, therefore proprietary data cannot be displayed to the public. Rubin encourages all scientists to consider how their projects can be completed using world public data and/or anonymized or derived data (see below). However, if there is a scientifically compelling reason, project teams are encouraged to reach out to the CitSci team to discuss options.  

Public
======

Rubin data that are considered “public” are freely available for use in citizen science projects. As described in DPOL-301, 503, and 504 in RDO-013, the contents of the alert packets and the Prompt Products Database (PPDB), which are described in the Rubin Data Products Definitions Document (DPDD; LSE-163), are public.

Derived
=======

As described in DPOL-601 in RDO-013, derived data product(s) are "derived from LSST proprietary data but cannot be used to recreate any proprietary LSST data product(s)." For example, images in PNG or JPEG format are considered derived. Derived data products are not proprietary and can be shared on the Zooniverse.

Anonymized
==========

Anonymized data refers to data (public or proprietary) for which the unique identifiers that would be necessary for scientific analysis and publication, such as catalog ID numbers or coordinates, have been removed.

Zooniverse Policies
===================

Zooniverse has multiple policies regarding project design, public engagement, data management, publication of results, and more. These policies are discussed on the `Zooniverse Lab Policies page <https://www.zooniverse.org/lab-policies>`_. 
