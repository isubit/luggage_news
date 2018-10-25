<?php
/**
 * @file
 * luggage_news.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function luggage_news_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:news.
  $config['node:news'] = array(
    'instance' => 'node:news',
    'disabled' => FALSE,
    'config' => array(
      'robots' => array(
        'value' => array(
          'index' => 0,
          'follow' => 0,
          'noindex' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'nosnippet' => 0,
          'noodp' => 0,
          'noydir' => 0,
          'noimageindex' => 0,
          'notranslate' => 0,
        ),
      ),
      'og:type' => array(
        'value' => 'article',
      ),
      'og:image' => array(
        'value' => '[node:field_news_images]',
      ),
    ),
  );

  return $config;
}
