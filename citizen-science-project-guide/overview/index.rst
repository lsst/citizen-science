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

########
Overview
########

Rubin Observatory's CitSci team provides an infrastructure to support the creation and management of citizen science projects using data from the Legacy Survey of Space and Time (LSST). This pipeline connects the Rubin Science Platform (RSP) with the Zooniverse platform, allowing project leads to develop projects without the needing to download/upload large volumes of data and providing data storage.

Through a notebook-based interface and a dedicated data pipeline, Rubin enables efficient sharing of large datasets, streamlined project setup, and technical support. This infrastructure includes templates, and guidelines to ensure compliance with data rights policies.

Beyond technical support, Rubin fosters a collaborative community for project leads to share ideas, troubleshoot challenges, and coordinate efforts. Projects also benefit from broader visibility through Rubin’s public outreach channels, and may have opportunities to engage with formal education programs, further amplifying the reach of citizen science initiatives.

########
Project Developement 
########

Project teams are strongly encouraged to contact the CitSci team early in the development process by emailing cscience@lsst.org. Early coordination allows the team to provide technical support, guidance, and help ensure your project aligns with Rubin and Zooniverse best practices. We also recommend reviewing the Existing Project Catalog to explore prior or ongoing projects.

Projects can be developed on the Rubin Science Platform (RSP) using Jupyter Notebooks (see the Tutorials section). These notebooks demonstrate how to use the Rubin pipeline to send data directly to the Zooniverse. A project template is available for optional use, which includes general Rubin branding, content, and useful links.

All citizen science projects will undergo a review process, similar to the standard Zooniverse project review. Initially, the number of objects that can be sent to the Zooniverse is limited to 100. This limit will be increased once the project passes review and is approved for beta testing.
