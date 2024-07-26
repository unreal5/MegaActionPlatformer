// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/ActionCharBase.h"

#include "PaperFlipbookComponent.h"
#include "PaperImporterSettings.h"
#include "PaperImporterSettings.h"

AActionCharBase::AActionCharBase()
{
	GetSprite()->CastShadow = true;

	// 光照材质
	auto LitMat = GetDefault<UPaperImporterSettings>()->GetDefaultMaskedMaterial(true);
	GetSprite()->SetMaterial(0, LitMat);
}
