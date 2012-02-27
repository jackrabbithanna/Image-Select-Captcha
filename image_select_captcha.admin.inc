<?php
// $Id: image_select_captcha.admin.inc,v 0.1 2012/2/27 15:24:31 markusa Exp $

/**
 * Function for the settings form
 */
function image_select_captcha_settings_form() {
  $form = array();
  
  /*$form['image_select_captcha_image_number'] = array(
    '#type' => 'select',
    '#title' => t('Number of images to select words for'),
    '#options' => array(1 => 1, 2 => 2, 3 => 3),
    '#default_value' => 1,
  );*/
  
	$form['image_select_captcha_image_location'] = array(
		'#type' => 'textfield',
		'#title' =>t('Location in sites/default/files'),
		'#description' => t('please no leading or trailing /'),
		'#default_value' => 'captcha_images',
		'#size' => 25,
		'#required' => TRUE,
	);																					 
  
  $form['#validate'] = array('image_select_captcha_settings_form_validate');
  return system_settings_form($form);
}

/**
 * Validation function for the settings
 */
function image_select_captcha_settings_form_validate($form, &$form_state) {
  
}


