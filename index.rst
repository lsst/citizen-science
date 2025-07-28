.. Review the README on instructions to contribute.
.. Review the style guide to keep a consistent approach to the documentation.
.. Static objects, such as figures, should be stored in the _static directory. Review the _static/README on instructions to contribute.
.. Do not remove the comments that describe each section. They are included to provide guidance to contributors.
.. Do not remove other content provided in the templates, such as a section. Instead, comment out the content and include comments to explain the situation. For example:
    - If a section within the template is not needed, comment out the section title and label reference. Do not delete the expected section title, reference or related comments provided from the template.
    - If a file cannot include a title (surrounded by ampersands (#)), comment out the title from the template and include a comment explaining why this is implemented (in addition to applying the ``title`` directive).

.. This is the label that can be used for cross referencing this file.
.. Recommended title label format is "Directory Name"-"Title Name" -- Spaces should be replaced by hyphens.
.. _Rubin-Observatory-Documentation-Citizen-Science:
.. Each section should include a label for cross referencing to a given area.
.. Recommended format for all labels is "Title Name"-"Section Name" -- Spaces should be replaced by hyphens.
.. To reference a label that isn't associated with an reST object such as a title or figure, you must include the link and explicit title using the syntax :ref:`link text <label-name>`.
.. A warning will alert you of identical labels during the linkcheck process.

###########################################################
Vera C. Rubin Observatory Documentation for Citizen Science
###########################################################

.. This section should provide a brief, top-level description of the page.
.. Important::

    This documentation area is under development and only in the early stages of design.
    It should not be used nor consulted for information at this time.

    The currently active documentation is available at `Rubin Observatory Citizen Science <https://rubinobservatory.org/for-scientists/citizen-science>`_.

This site provides information about the Vera C. Rubin Observatory's support for Citizen Science projects. Citizen science provides the opportunity for the public to participate in cutting-edge research while also providing a unique and valuable method for analysizing Rubin data for researchers. Rubin works in partnership with the Zooniverse to support members of the science community to build successful projects. 

The public excitement, interest and time is a valuable resource to all Rubin based citizen science projects. Our guide here aims to respect the public’s time and interest. We  thank our project leads for your efforts to adhere to the best practices and guidelines and support you in  giving back to the public at large as we share the Rubin Observatory with the world.

If you are interested in volunteering as a member of the public, please visit `rubinobservatory.org/explore/citizen-science <https://rubinobservatory.org/explore/citizen-science>`_. 


.. _Rubin-Observatory-Documentation-Citizen-Science-Project-Guide:

Citizen Science project guide
=============================

The following is a guide to building a Citizen Science project using Rubin data on the Zooniverse platform. The `Zooniverse project builder <https://www.zooniverse.org/lab>`_ is also a great resource for getting started. 

.. toctree::
    :maxdepth: 2
    :glob:

    citizen-science-project-guide/index


.. _Rubin-Observatory-Documentation-Citizen-Science-Tutorials:

Tutorials
=========

The following information includes tutorials for Citizen Science. 
We also include a description of the `rubin.citsci` package, which includes the workhorse tools for citizen science with Rubin.

.. toctree::
    :maxdepth: 2
    :glob:

    tutorials/index


.. _Rubin-Observatory-Documentation-Citizen-Science-Get-Support:

Resources
=========

The following is information is provided to get additional support for Citizen Science.

.. toctree::
    :maxdepth: 2
    :glob:

    support/index


.. _Rubin-Observatory-Documentation-Citizen-Science-Project-Information:

Documentation project information
=================================

Below includes information on this documentation project and how to contribute to it.

.. toctree::
    :maxdepth: 2
    :glob:
    :titlesonly:

    project/index
