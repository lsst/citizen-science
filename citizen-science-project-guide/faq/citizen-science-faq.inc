.. Review the README on instructions to contribute.
.. Review the style guide to keep a consistent approach to the documentation.
.. Static objects, such as figures, should be stored in the _static directory. Review the _static/README on instructions to contribute.
.. Do not remove the comments that describe each section. They are included to provide guidance to contributors.
.. Do not remove other content provided in the templates, such as a section. Instead, comment out the content and include comments to explain the situation. For example:
    - If a section within the template is not needed, comment out the section title and label reference. Do not delete the expected section title, reference or related comments provided from the template.
    - If a file cannot include a title (surrounded by ampersands (#)), comment out the title from the template and include a comment explaining why this is implemented (in addition to applying the ``title`` directive).

.. This is the label that can be used for cross referencing this file.
.. Recommended title label format is "Directory Name"-"Title Name" -- Spaces should be replaced by hyphens.
.. _Citizen-Science-Project-Guide-FAQ:
.. Each section should include a label for cross referencing to a given area.
.. Recommended format for all labels is "Title Name"-"Section Name" -- Spaces should be replaced by hyphens.
.. To reference a label that isn't associated with an reST object such as a title or figure, you must include the link and explicit title using the syntax :ref:`link text <label-name>`.
.. A warning will alert you of identical labels during the linkcheck process.

.. This file does not contain a title so it can match formatting in another location (citizen-science-project-guide/index.rst).
.. title:: FAQ
.. ###
.. FAQ
.. ###

.. This section should provide a brief, top-level description of the page.

.. _FAQ-Primary-Contact:

`The Zooniverse covers their own FAQs which you can find here. <https://www.zooniverse.org/about/faq>`_

Who should I contact for additional information?
------------------------------------------------

Questions about doing citizen science projects with Rubin Observatory should be submitted in the
Support category of the `Rubin Community Forum <https://community.lsst.org/>`__.

What is the high-level workflow of using the citizen science notebooks?
------------------------------------------------

The high-level details are illustrated in this diagram:

.. image:: workflow-diagram.png
   :alt: Alternate text for screen readers
   :width: 678px
   :height: 542px
   :scale: 100 %
   :align: center

All steps in the orange columns are actions taken by project owners in the RSP Notebook Aspect. All steps in the blue and purple columns happen automatically behind-the-scenes in the citizens science pipeline or on the Zooniverse platform.

Where can I use the citizen science notebooks/pipeline?
------------------------------------------------

As of July 2026, the citizen science notebooks will work automatically in "the cloud" instance of the RSP Notebook Aspect at https://data.lsst.cloud, and with some minor additional steps in the UKDF instance at http://rsp.lsst.ac.uk/. The notebooks cannot be run at the USDF (https://usdf-rsp.slac.stanford.edu/) at this time. The notebooks will not function in any other environment including in your local device.

What software do I need to run the citizen science tutorial notebooks?
------------------------------------------------

The easiest way to get started is to clone the https://github.com/lsst-epo/citizen-science-notebooks repo into your home directory in the RSP Notebook Aspect. The repo contains not only the notebooks, but also a utility helper script that is referenced in the tutorial notebook. The utility helper script provides quality-of-life time-saving functions designed to demonstrate TAP and Butler query usage, Zooniverse manifest file creation, among other times.

The longterm plan is for these notebooks to be deployed automatically in the `~/notebooks/tutorial-notebooks` folder by default.

What prerequisite steps are necessary to use the citizen science tutorial notebooks?
------------------------------------------------

1. You must have an account for the RSP Notebook Aspect at https://data.lsst.cloud or https://usdf-rsp.slac.stanford.edu/
2. You must have a `Zooniverse <https://www.zooniverse.org/>`_ account

What kind of data can be sent using the citizen science tutorial notebooks?
------------------------------------------------

Currently only two types of datasets can be sent:

1. Static cutout images
2. "flipbook" image series

There are plans to also provide at a later date:

* A machine learning notebook
* A notebook that makes use of alert broker data

The Zooniverse refers to these datasets as a "subject sets" and each flipbook or static cutout is referred to as a "subject".


Where is the citizen science data stored?
------------------------------------------------

One of the benefits of working with Rubin EPO is you will get free data hosting in the EPO Data Center (EDC). You image data is stored in EPO's cloud storage and hosted there and is publicly available for Zooniverse's project builder. Your project data will automatically be uploaded to the EDC if you use the citizen science notebooks as a starting place, or you can request for assistance in manually uploading your project data.

What are the "citizen science notebooks"?
------------------------------------------------

EPO and CST have prepared example Jupyter Notebooks that can be run in the RSP Notebook Aspect and demonstrate specific use cases for curating data for a citizen science project. If you do use one of the citizen science notebooks as a starting place you automatically have your Zooniverse manifest file created, your image data zipped up and uploaded, and Zooniverse will be noticed automatically of the new subject set and will begin building it immediately. When your Zooniverse workflows are completed for each subject set you can even use the notebooks to request a classification export from the Zooniverse. The notebooks are also kept up-to-date with the latest updates to the Rubin Data Produects (TAP query service, Butler, Image Cutout Service, etc.).

How much data can I send at one time using a citizen science notebook?
------------------------------------------------

Initially, you can only send 100 subjects using the notebooks. After contacting the Rubin EPO citizen science team, you can send 10,000 subjects at a time. You may send more than 10,000 subjects at a time, but you must first reach out and request an “excess data exception” from Rubin EPO. The Rubin EPO citizen science team can be contacted on Slack, the Community Forum or email clare.higgs@noirlab.com .

What if I don't want to use the citizen science notebooks?
------------------------------------------------

Using the citizen science notebooks is the easiest way to upload your data, but EPO can still assist in getting your data into the EDC for public storage/hosting should you choose not to use the notebooks. The most common use case for this is transferring data from the USDF, where the citizen science notebooks are not functional, to the EDC. Transferring the data is often a collaborative effort, but an EPO resource will be able to assist. After the upload you will be responsible for the assembling the Zooniverse manifest file referencing the uploaded image URLs.

If I lose track of my data can EPO provide a backup copy?
------------------------------------------------

Yes, should you lose your data after using a citizen science notebook to upload it to the EDC then EPO can provide the original uploaded zipped copy by request.

What kind of information is collected and stored in the EPO citizen science database when using a citizen science notebook?
------------------------------------------------

The most identifiable piece of information we collect is email address and we use that to associate uploaded datasets to individuals who use the notebooks and their Zooniverse projects. We keep records of project owners, metadata about their Zooniverse project(s), metadata about the subject sets the owners upload, and data that helps us identify crossover between projects to encourage collaboration.

Can I request for my data to be purged from the EPO Data Center cloud storage?
------------------------------------------------

Yes, we can purge your data upon request.