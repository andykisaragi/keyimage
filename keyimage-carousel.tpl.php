<ul class="bxslider keyimage-carousel">
	<?php foreach ($images as $image):?>
	<li><img src="<?php print image_style_url($preset,$image['uri']); ?>" alt="<?php print $image['alt'];?>" /><span class="caption"><?php print $image['title']?></span></li>
	<?php endforeach?>
</ul>