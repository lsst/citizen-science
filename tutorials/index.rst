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

######################
`rubin.citsci` package
######################

The `rubin.citsci` package is intended to be used on the Vera Rubin Observatory's Science Platform (RSP) in the hosted Notebook Aspect at http://data.lsst.cloud. This package will not work in any other environment.

It contains utility functions useful for sending and receiving Rubin data to and from the Zooniverse.
For instance, it contains functions such as `login_to_zooniverse` and `create_project_from_template` to assist Rubin users with the process of creating Zooniverse projects.
Functions such as `write_manifest_file` and `send_tabular_data` assist with sending data to Zooniverse while functions such as `download_batch_metadata` and `retrieve_data` are used to download information and classifications from Zooniverse.

`create_new_project_from_template(project_id)`

This method will create a new project under the authenticated user's account based on the provided Zooniverse project ID. If no project template ID is provided then a new project will be created from a Rubin test project template.

Must be authenticated into the Zooniverse API or an exception will occur.

Returns an instance of a Zooniverse project.

`login_to_zooniverse(email)`

Email address validation occurs before the login prompt is called and also checks if the latest version of this package is installed.

`list_workflows()`

If the user has logged into the Zooniverse platform via the login_to_zooniverse() function and selected a project, then this cell will list all active workflows for the selected project.

`create_project(name, description, make_active_project=False)`

Assuming you have a Zooniverse account and have used the login_to_zooniverse() method to log in, this method will create a new project for you with the following settings:

Primary Language: U.S. English
Private: False

And `CitizenSciencePipelineError` exception is thrown if the "name" or "description" name arguments are not specified.

Returns a dict with the newly created project details.

`write_manifest_file(manifest, batch_dir)`

Takes an array of dicts in Zooniverse canonical format and writes a CSV manifest file to the Notebook Aspect's filesystem in the specified batch directory.

Returns the relative path to the manifest.csv

`clean_up_unused_subject_set()`

This method is used when a subject set was created as part of the data transfer process, but for some reason the process errored out and the empty subject set now needs to be cleaned up (deleted) so that unused subject sets do not clutter the target Zooniverse project.

This method will quietly fail if there was no subject set found or if the login method hasn't been executed yet.

`check_status()`

This method will check whether or not the manifest file has been moved to the public storage bucket - which occurs at the last step of the process of transferring the new data to the target Zooniverse.

This method was implemented because the processing time for sending the maximum number of objects to the Zooniverse can be > 2 minutes, leaving the potential for response timeout.

Upon success, a JSON response will be returned which includes a "status" of "success" and a "manifest_url" of the URL where the manifest file was uploaded to.

`download_batch_metadata()`

This method will return the most recent manifest URL for the active project if one exists.

`send_tabular_data(subject_set_name, manifest_location)`

Sends the new tabular data batch to the Rubin EPO Data Center for public hosting.

Upon successful completion, the manifest URL will be returned as well as a message that the data was successfully process, but that more processing will occur on the Zooniverse platform. Once this processing is done on the Zooniverse platform, the email address associated with the Zooniverse project should receive an email from Zoonivere stating that a new subject set is available.

`send_image_data(subject_set_name, zip_path, [options])`

Sends the new data batch to the Rubin EPO Data Center for public hosting so that the data can be added to the target Zooniverse project.

Several events need to have occurred for this function to complete successfully:
            
1. The user must have already logged into the Zooniverse platform
2. The user must have given their subject set a unique name and
    passed it into the method as a named argument
3. The user must have specified a batch directory where the manifest
    file and the subject data exist
4. The manifest file must be formatted correctly, see the 
    make_manifest_with_images() function in `utils.py` in the Citizen
    Science Notebooks repo for more details:

https://github.com/lsst-epo/citizen-science-notebooks/blob/main/utils.py

Upon successful completion, the manifest URL will be returned as well as a message that the data was successfully process, but that more processing will occur on the Zooniverse platform. Once this processing is done on the Zooniverse platform, the email address associated with the Zooniverse project should receive an email from Zoonivere stating that a new subject set is available.

`zip_image_cutouts(batch_dir)`

This function is responsible for zipping up all the cutouts that will be sent to the Zooniverse, and returns the path to the zip file.

`retrieve_data(project_id)`

Given a project ID of a project that contains a completed workflow with data that has been classified, this method will request the classified/completed data and download it if it is available.
