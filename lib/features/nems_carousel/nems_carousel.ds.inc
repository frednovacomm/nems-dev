<?php
/**
 * @file
 * nems_carousel.ds.inc
 */

/**
 * Implements hook_ds_custom_fields_info().
 */
function nems_carousel_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'nems_block_field_carousel';
  $ds_field->label = 'Carousel';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|nems_carousel-block',
    'block_render' => '1',
  );
  $export['nems_block_field_carousel'] = $ds_field;

  return $export;
}