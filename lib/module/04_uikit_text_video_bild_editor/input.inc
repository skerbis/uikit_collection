<?php
$checkKlxmFalse = false; 
$mform = new MForm();
$mform->addTab('Text');
$mform->addTextAreaField(1, array('label'=>'Text','class'=>'ckeditor', 'data-ckeditor-profile'=>'lite'));
$mform->addSelectField(8, array('uk-column-1-1'=>'1 Spaltig','uk-column-1-2'=>'2 Spaltig','uk-column-1-3'=>'3 Spaltig'), array('label'=>'Text Spalten', 'class'=>'selectpicker'));
$mform->addTab('Media');
$mform->addCustomLinkField(6, array('label'=>'Media', 'class'=>'test', 'data-tel'=>'disable', 'data-mailto'=>'disable', 'data-formlink'=>'disable', 'data-intern'=>'disable'));
$mform->addSelectField(2, array(' '=>'Standard','klxm_pleft'=>'links','klxm_pright'=>'rechts'), array('label'=>'Position des Bildes', 'class'=>'selectpicker'));
$mform->addSelectField(3, array('klxm_text_modul_bild_klein'=>'klein','klxm_text_modul_bild_mittel'=>'mittel','klxm_text_modul_bild_gross'=>'groß','klxm_text_modul_bild_volle_breite'=>'Volle Breite'), array('label'=>'Größe des Bildes', 'class'=>'selectpicker'));
$mform->addTextAreaField(5, array('label'=>'Caption'));
$mform->addSelectField(4, array(' '=>'Ja','klxm_bildunterschrift_verstecken'=>'Nein'), array('label'=>'Caption auch als Bildunterschrift anzeigen', 'class'=>'selectpicker'));
$mform->addSelectField(7, array('uk-lightbox'=>'Ja',' '=>'Nein'), array('label'=>'Lightbox-Funktion', 'class'=>'selectpicker'));
if ($checkKlxmFalse == false) {
$mform->addSelectField(9, array('uk-box-shadow-medium'=>'Mittlerer Schatten','uk-box-shadow-xlarge'=>'Großer Schatten'), array('label'=>'Bildschatten', 'class'=>'selectpicker'));
}
$mform->addSelectField(10, array('ja'=>'ja','nein'=>'nein'), array('label'=>'Bild als Kreis', 'class'=>'selectpicker'));
if ($checkKlxmFalse == false) {
$mform->addSelectField(11, array('ja'=>'ja','nein'=>'nein'), array('label'=>'Bild animieren', 'class'=>'selectpicker'));
$mform->addSelectField(12, array('ja'=>'ja','nein'=>'nein'), array('label'=>'Bild Animation wiederholen?', 'class'=>'selectpicker'));
}

echo $mform->show();






