// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Misc/MonolithicHeaderBoilerplate.h"
MONOLITHIC_HEADER_BOILERPLATE()

#include "Engine.h"
#include "EngineDefines.h"

#include "Misc/Timespan.h"
#include "SlateBasics.h"
#include "EditorStyle.h"

#include "EditorComponents.h"
#include "EditorReimportHandler.h"
#include "TexAlignTools.h"

#include "TickableEditorObject.h"

// @todo Classes.h
#include "Classes/ActorFactories/ActorFactory.h"
#include "Classes/ActorFactories/ActorFactoryAmbientSound.h"
#include "Classes/ActorFactories/ActorFactoryAtmosphericFog.h"
#include "Classes/ActorFactories/ActorFactoryBlueprint.h"
#include "Classes/ActorFactories/ActorFactoryBoxReflectionCapture.h"
#include "Classes/ActorFactories/ActorFactoryBoxVolume.h"
#include "Classes/ActorFactories/ActorFactoryCameraActor.h"
#include "Classes/ActorFactories/ActorFactoryCharacter.h"
#include "Classes/ActorFactories/ActorFactoryClass.h"
#include "Classes/ActorFactories/ActorFactoryCylinderVolume.h"
#include "Classes/ActorFactories/ActorFactoryDeferredDecal.h"
#include "Classes/ActorFactories/ActorFactoryDirectionalLight.h"
#include "Classes/ActorFactories/ActorFactoryEmitter.h"
#include "Classes/ActorFactories/ActorFactoryEmptyActor.h"
#include "Classes/ActorFactories/ActorFactoryPawn.h"
#include "Classes/ActorFactories/ActorFactoryExponentialHeightFog.h"
#include "Classes/ActorFactories/ActorFactoryMatineeActor.h"
#include "Classes/ActorFactories/ActorFactoryNote.h"
#include "Classes/ActorFactories/ActorFactoryPhysicsAsset.h"
#include "Classes/ActorFactories/ActorFactoryPlaneReflectionCapture.h"
#include "Classes/ActorFactories/ActorFactoryPlayerStart.h"
#include "Classes/ActorFactories/ActorFactoryPointLight.h"
#include "Classes/ActorFactories/ActorFactorySkeletalMesh.h"
#include "Classes/ActorFactories/ActorFactoryAnimationAsset.h"
#include "Classes/ActorFactories/ActorFactorySkyLight.h"
#include "Classes/ActorFactories/ActorFactorySphereReflectionCapture.h"
#include "Classes/ActorFactories/ActorFactorySphereVolume.h"
#include "Classes/ActorFactories/ActorFactorySpotLight.h"
#include "Classes/ActorFactories/ActorFactoryStaticMesh.h"
#include "Classes/ActorFactories/ActorFactoryBasicShape.h"
#include "Classes/ActorFactories/ActorFactoryInteractiveFoliage.h"
#include "Classes/ActorFactories/ActorFactoryTargetPoint.h"
#include "Classes/ActorFactories/ActorFactoryTextRender.h"
#include "Classes/ActorFactories/ActorFactoryTriggerBox.h"
#include "Classes/ActorFactories/ActorFactoryTriggerCapsule.h"
#include "Classes/ActorFactories/ActorFactoryTriggerSphere.h"
#include "Classes/ActorFactories/ActorFactoryVectorFieldVolume.h"
#include "Classes/Exporters/AnimSequenceExporterFBX.h"
#include "Classes/Commandlets/AudioTestCommandlet.h"
#include "Classes/Preferences/CascadeOptions.h"
#include "Classes/Settings/ClassViewerSettings.h"
#include "Classes/Commandlets/CompressAnimationsCommandlet.h"
#include "Classes/Settings/ContentBrowserSettings.h"
#include "Classes/Commandlets/CookCommandlet.h"
#include "Classes/CookOnTheSide/CookOnTheFlyServer.h"
#include "Classes/Preferences/CurveEdOptions.h"
#include "Classes/Animation/DebugSkelMeshComponent.h"
#include "Classes/Editor/UnrealEdTypes.h"
#include "Classes/MaterialEditor/DEditorParameterValue.h"
#include "Classes/MaterialEditor/DEditorFontParameterValue.h"
#include "Classes/MaterialEditor/DEditorScalarParameterValue.h"
#include "Classes/MaterialEditor/DEditorStaticComponentMaskParameterValue.h"
#include "Classes/MaterialEditor/DEditorStaticSwitchParameterValue.h"
#include "Classes/MaterialEditor/DEditorTextureParameterValue.h"
#include "Classes/MaterialEditor/DEditorVectorParameterValue.h"
#include "Classes/Commandlets/DerivedDataCacheCommandlet.h"
#include "Classes/Commandlets/DiffAssetsCommandlet.h"
#include "Classes/Commandlets/DiffPackagesCommandlet.h"
#include "Classes/Commandlets/DiffFilesCommandlet.h"
#include "Classes/Commandlets/DumpBlueprintsInfoCommandlet.h"
#include "Classes/Commandlets/DumpHiddenCategoriesCommandlet.h"
#include "GraphEditAction.h"
#include "Classes/MaterialGraph/MaterialGraph.h"
#include "EdGraphNode_Comment.h"
#include "Classes/MaterialGraph/MaterialGraphNode_Comment.h"
#include "Classes/Animation/EditorAnimBaseObj.h"
#include "Classes/Animation/EditorAnimCompositeSegment.h"
#include "Classes/Animation/EditorAnimSegment.h"
#include "DisplayDebugHelpers.h"
#include "Animation/AnimInstance.h"
#include "Classes/Animation/EditorCompositeSection.h"
#include "Classes/Animation/EditorNotifyObject.h"
#include "Classes/Builders/EditorBrushBuilder.h"
#include "Classes/Builders/ConeBuilder.h"
#include "Classes/Builders/CubeBuilder.h"
#include "Classes/Builders/CurvedStairBuilder.h"
#include "Classes/Builders/CylinderBuilder.h"
#include "Classes/Builders/LinearStairBuilder.h"
#include "Classes/Builders/SheetBuilder.h"
#include "Classes/Builders/SpiralStairBuilder.h"
#include "Classes/Builders/TetrahedronBuilder.h"
#include "Classes/Builders/VolumetricBuilder.h"
#include "Classes/Editor/EditorPerProjectUserSettings.h"
#include "Classes/Editor/Transactor.h"
#include "Classes/Settings/LevelEditorPlaySettings.h"
#include "Classes/Settings/LevelEditorViewportSettings.h"
#include "Classes/Editor/EditorEngine.h"
#include "IPackageAutoSaver.h"
#include "ISourceControlModule.h"
#include "ComponentVisualizer.h"
#include "ComponentVisualizerManager.h"
#include "Classes/Editor/UnrealEdEngine.h"
#include "Classes/Settings/EditorExperimentalSettings.h"
#include "Classes/Settings/EditorLoadingSavingSettings.h"
#include "Classes/Settings/EditorMiscSettings.h"
#include "Classes/Animation/EditorParentPlayerListObj.h"
#include "Classes/Animation/EditorSkeletonNotifyObj.h"
#include "Classes/Exporters/ExportTextContainer.h"
#include "Classes/Factories/Factory.h"
#include "Classes/Factories/AnimBlueprintFactory.h"
#include "Classes/Factories/AnimCompositeFactory.h"
#include "Classes/Factories/AnimMontageFactory.h"
#include "Classes/Factories/AnimSequenceFactory.h"
#include "Classes/Factories/PoseAssetFactory.h"
#include "Classes/Factories/BlendSpaceFactory1D.h"
#include "Classes/Factories/AimOffsetBlendSpaceFactory1D.h"
#include "Classes/Factories/BlendSpaceFactoryNew.h"
#include "Classes/Factories/AimOffsetBlendSpaceFactoryNew.h"
#include "Classes/Factories/BlueprintFactory.h"
#include "Classes/Factories/BlueprintFunctionLibraryFactory.h"
#include "Classes/Factories/BlueprintMacroFactory.h"
#include "Classes/Factories/BlueprintInterfaceFactory.h"
#include "Classes/Factories/CameraAnimFactory.h"
#include "Classes/Factories/EnumFactory.h"
#include "Classes/Factories/FbxFactory.h"
#include "Classes/Factories/FbxSceneImportFactory.h"
#include "Classes/Factories/ReimportFbxAnimSequenceFactory.h"
#include "Classes/Factories/ReimportFbxSkeletalMeshFactory.h"
#include "Classes/Factories/ReimportFbxStaticMeshFactory.h"
#include "Classes/Factories/ReimportFbxSceneFactory.h"
#include "Classes/Factories/FontFactory.h"
#include "Classes/Factories/FontFileImportFactory.h"
#include "Classes/Factories/ForceFeedbackEffectFactory.h"
#include "Classes/Factories/HapticFeedbackEffectCurveFactory.h"
#include "Classes/Factories/HapticFeedbackEffectBufferFactory.h"
#include "Classes/Factories/HapticFeedbackEffectSoundWaveFactory.h"
#include "Classes/Factories/InterpDataFactoryNew.h"
#include "Classes/Factories/LevelFactory.h"
#include "Classes/Factories/MaterialFactoryNew.h"
#include "Classes/Factories/MaterialFunctionFactoryNew.h"
#include "Classes/Factories/MaterialInstanceConstantFactoryNew.h"
#include "Classes/Factories/MaterialParameterCollectionFactoryNew.h"
#include "Classes/Factories/ModelFactory.h"
#include "Classes/Factories/ObjectLibraryFactory.h"
#include "Classes/Factories/PackageFactory.h"
#include "Classes/Factories/PackFactory.h"
#include "Classes/Factories/ParticleSystemFactoryNew.h"
#include "Classes/Factories/PhysicalMaterialFactoryNew.h"
#include "Classes/Factories/PolysFactory.h"
#include "Classes/Factories/SkeletonFactory.h"
#include "Classes/Factories/SlateBrushAssetFactory.h"
#include "Classes/Factories/SlateWidgetStyleAssetFactory.h"
#include "Classes/Factories/StructureFactory.h"
#include "Classes/Factories/SubsurfaceProfileFactory.h"
#include "Classes/Factories/Texture2dFactoryNew.h"
#include "Classes/Factories/TextureFactory.h"
#include "Classes/Factories/ReimportTextureFactory.h"
#include "Classes/Factories/TrueTypeFontFactory.h"
#include "Classes/Factories/TextureRenderTargetCubeFactoryNew.h"
#include "Classes/Factories/TextureRenderTargetFactoryNew.h"
#include "Classes/Factories/TouchInterfaceFactory.h"
#include "Classes/Factories/VectorFieldStaticFactory.h"
#include "Classes/Factories/ReimportVectorFieldStaticFactory.h"
#include "Classes/Factories/WorldFactory.h"
#include "Classes/Factories/FbxAssetImportData.h"
#include "Classes/Factories/FbxAnimSequenceImportData.h"
#include "Classes/Factories/FbxMeshImportData.h"
#include "Classes/Factories/FbxSkeletalMeshImportData.h"
#include "Classes/Factories/FbxStaticMeshImportData.h"
#include "Classes/Factories/FbxTextureImportData.h"
#include "Classes/Factories/FbxImportUI.h"
#include "Classes/Factories/FbxSceneImportData.h"
#include "Classes/Factories/FbxSceneImportOptions.h"
#include "Classes/Factories/FbxSceneImportOptionsSkeletalMesh.h"
#include "Classes/Factories/FbxSceneImportOptionsStaticMesh.h"

#include "Classes/Factories/HairWorksFactory.h"

#include "Classes/Commandlets/FileServerCommandlet.h"
#include "Classes/Commandlets/GatherTextCommandletBase.h"
#include "Classes/Commandlets/GatherTextCommandlet.h"
#include "Classes/Commandlets/GatherTextFromAssetsCommandlet.h"
#include "Classes/Commandlets/GatherTextFromMetadataCommandlet.h"
#include "Classes/Commandlets/GatherTextFromSourceCommandlet.h"
#include "Classes/Commandlets/GenerateGatherArchiveCommandlet.h"
#include "Classes/Commandlets/GenerateGatherManifestCommandlet.h"
#include "Classes/Commandlets/GenerateTextLocalizationReportCommandlet.h"
#include "Classes/Commandlets/GenerateTextLocalizationResourceCommandlet.h"
#include "Classes/Commandlets/InternationalizationConditioningCommandlet.h"
#include "Classes/Commandlets/InternationalizationExportCommandlet.h"
#include "Classes/Commandlets/GenerateBlueprintAPICommandlet.h"
#include "Classes/Commandlets/GenerateDistillFileSetsCommandlet.h"
#include "Classes/Editor/GroupActor.h"
#include "Classes/Settings/LevelEditorMiscSettings.h"
#include "Classes/Exporters/LevelExporterFBX.h"
#include "Classes/Exporters/LevelExporterLOD.h"
#include "Classes/Exporters/LevelExporterOBJ.h"
#include "Classes/Exporters/LevelExporterSTL.h"
#include "Classes/Exporters/LevelExporterT3D.h"
#include "Classes/Preferences/LightmassOptionsObject.h"
#include "Classes/Commandlets/ListMaterialsUsedWithMeshEmittersCommandlet.h"
#include "Classes/Commandlets/ListStaticMeshesImportedFromSpeedTreesCommandlet.h"
#include "Classes/Commandlets/LoadPackageCommandlet.h"
#include "Classes/MaterialEditor/MaterialEditorInstanceConstant.h"
#include "Classes/MaterialEditor/MaterialEditorMeshComponent.h"
#include "Classes/Preferences/MaterialEditorOptions.h"
#include "Classes/MaterialGraph/MaterialGraphNode_Base.h"
#include "Classes/MaterialGraph/MaterialGraphNode.h"
#include "Classes/MaterialGraph/MaterialGraphNode_Root.h"
#include "Classes/MaterialGraph/MaterialGraphSchema.h"
#include "Classes/Exporters/ModelExporterT3D.h"
#include "Classes/Exporters/ObjectExporterT3D.h"
#include "Classes/Commandlets/ParticleSystemAuditCommandlet.h"
#include "Classes/Preferences/PersonaOptions.h"
#include "Classes/Preferences/PhysicsAssetEditorOptions.h"
#include "Classes/Commandlets/PkgInfoCommandlet.h"
#include "Classes/Exporters/PolysExporterOBJ.h"
#include "Classes/Exporters/PolysExporterT3D.h"
#include "Classes/MaterialEditor/PreviewMaterial.h"
#include "Classes/Settings/ProjectPackagingSettings.h"
#include "Classes/Commandlets/ReplaceActorCommandlet.h"
#include "Classes/Commandlets/ResavePackagesCommandlet.h"
#include "Classes/ThumbnailRendering/SceneThumbnailInfo.h"
#include "Classes/ThumbnailRendering/ThumbnailManager.h"
#include "Classes/ThumbnailRendering/SceneThumbnailInfoWithPrimitive.h"
#include "Classes/ThumbnailRendering/WorldThumbnailInfo.h"
#include "Classes/Exporters/SequenceExporterT3D.h"
#include "Classes/Exporters/SkeletalMeshExporterFBX.h"
#include "Classes/Exporters/SoundExporterOGG.h"
#include "Classes/Exporters/SoundExporterWAV.h"
#include "Classes/Exporters/SoundSurroundExporterWAV.h"
#include "Classes/Exporters/StaticMeshExporterFBX.h"
#include "Classes/Exporters/StaticMeshExporterOBJ.h"
#include "Classes/Editor/TemplateMapMetadata.h"
#include "Classes/TexAligner/TexAligner.h"
#include "Classes/TexAligner/TexAlignerBox.h"
#include "Classes/TexAligner/TexAlignerDefault.h"
#include "Classes/TexAligner/TexAlignerFit.h"
#include "Classes/TexAligner/TexAlignerPlanar.h"
#include "Classes/Exporters/TextBufferExporterTXT.h"
#include "Classes/Exporters/TextureCubeExporterHDR.h"
#include "Classes/Exporters/TextureExporterBMP.h"
#include "Classes/Exporters/TextureExporterHDR.h"
#include "Classes/Exporters/RenderTargetExporterHDR.h"
#include "Classes/Exporters/TextureExporterPCX.h"
#include "Classes/Exporters/TextureExporterTGA.h"
#include "Classes/ThumbnailRendering/ThumbnailRenderer.h"
#include "Classes/ThumbnailRendering/DefaultSizedThumbnailRenderer.h"
#include "ThumbnailHelpers.h"
#include "Classes/ThumbnailRendering/AnimBlueprintThumbnailRenderer.h"
#include "Classes/ThumbnailRendering/AnimSequenceThumbnailRenderer.h"
#include "Classes/ThumbnailRendering/BlendSpaceThumbnailRenderer.h"
#include "Classes/ThumbnailRendering/BlueprintThumbnailRenderer.h"
#include "Classes/ThumbnailRendering/ClassThumbnailRenderer.h"
#include "Classes/ThumbnailRendering/LevelThumbnailRenderer.h"
#include "Classes/ThumbnailRendering/MaterialFunctionThumbnailRenderer.h"
#include "Classes/ThumbnailRendering/MaterialInstanceThumbnailRenderer.h"
#include "Classes/ThumbnailRendering/SkeletalMeshThumbnailRenderer.h"
#include "Classes/ThumbnailRendering/SlateBrushThumbnailRenderer.h"
#include "Classes/ThumbnailRendering/StaticMeshThumbnailRenderer.h"
#include "Classes/ThumbnailRendering/WorldThumbnailRenderer.h"
#include "Classes/ThumbnailRendering/SoundWaveThumbnailRenderer.h"
#include "Classes/ThumbnailRendering/TextureThumbnailRenderer.h"
#include "Classes/ThumbnailRendering/FontThumbnailRenderer.h"
#include "Classes/ThumbnailRendering/ParticleSystemThumbnailRenderer.h"
#include "Classes/ThumbnailRendering/SubsurfaceProfileRenderer.h"
#include "Classes/Factories/TextureCubeThumbnailRenderer.h"
#include "Classes/Editor/TransBuffer.h"
#include "Classes/Preferences/UnrealEdKeyBindings.h"
#include "Classes/Preferences/UnrealEdOptions.h"
#include "Classes/Commandlets/UpdateGameProjectCommandlet.h"
#include "Classes/UserDefinedStructure/UserDefinedStructEditorData.h"
#include "Classes/Commandlets/WrangleContentCommandlet.h"
//////////////////////	@todo Classes.h

#include "Kismet2/ComponentEditorUtils.h"
#include "Commandlets/EditorCommandlets.h"
#include "EditorUndoClient.h"
#include "EditorModeTools.h"
#include "UnrealWidget.h"
#include "Editor.h"

#include "EditorViewportClient.h"
#include "LevelEditorViewport.h"

#include "EditorModeRegistry.h"
#include "EdMode.h"
#include "EditorModeManager.h"
#include "EditorModes.h"

#include "MRUList.h"


//#include "../Private/GeomFitUtils.h"

#include "UnrealEdMisc.h"
#include "EditorDirectories.h"
#include "Utils.h"
#include "FileHelpers.h"
#include "EditorModeInterpolation.h"
#include "PhysicsManipulationMode.h"
#include "PhysicsAssetUtils.h"

#include "ParticleDefinitions.h"

#include "Dialogs/Dialogs.h"
#include "Viewports.h"

#include "UnrealEdGlobals.h"

#include "UnrealEdMessages.h"

#include "EditorAnalytics.h"