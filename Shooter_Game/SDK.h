﻿#pragma once

// --------------------------------------- \\
//      Sdk Generated By ( CheatGear )     \\
// --------------------------------------- \\
// Name: Shooter_Game, Version: 03.22.2014

#include <set>
#include <string>
#include <vector>
#include <locale>
#include <unordered_set>
#include <unordered_map>
#include <iostream>
#include <sstream>
#include <cstdint>
#include <Windows.h>

#include "SDK/BasicTypes_Package.h"
#include "SDK/CoreUObject_Package.h"
#include "SDK/InputCore_Package.h"
#include "SDK/DeveloperSettings_Package.h"
#include "SDK/Chaos_Package.h"
#include "SDK/PhysicsCore_Package.h"
#include "SDK/AudioPlatformConfiguration_Package.h"
#include "SDK/PropertyAccess_Package.h"
#include "SDK/SlateCore_Package.h"
#include "SDK/PacketHandler_Package.h"
#include "SDK/Slate_Package.h"
#include "SDK/ClothingSystemRuntimeInterface_Package.h"
#include "SDK/Engine_Package.h"
#include "SDK/CinematicCamera_Package.h"
#include "SDK/DatasmithContent_Package.h"
#include "SDK/VariantManagerContent_Package.h"
#include "SDK/ChaosSolverEngine_Package.h"
#include "SDK/AndroidPermission_Package.h"
#include "SDK/GeometryCache_Package.h"
#include "SDK/CableComponent_Package.h"
#include "SDK/AudioMixer_Package.h"
#include "SDK/AudioCapture_Package.h"
#include "SDK/MagicLeapIdentity_Package.h"
#include "SDK/MagicLeapImageTracker_Package.h"
#include "SDK/AnimationCore_Package.h"
#include "SDK/AnimGraphRuntime_Package.h"
#include "SDK/Highrise_Package.h"
#include "SDK/OnlineSubsystem_Package.h"
#include "SDK/OnlineSubsystemUtils_Package.h"
#include "SDK/MagicLeapController_Package.h"
#include "SDK/GameplayTasks_Package.h"
#include "SDK/GameplayTags_Package.h"
#include "SDK/NavigationSystem_Package.h"
#include "SDK/AIModule_Package.h"
#include "SDK/ReplicationGraph_Package.h"
#include "SDK/Gauntlet_Package.h"
#include "SDK/ShooterGame_Package.h"
#include "SDK/WeapGun_Impacts_Package.h"
#include "SDK/MRMesh_Package.h"
#include "SDK/SessionMessages_Package.h"
#include "SDK/MagicLeapPlanes_Package.h"
#include "SDK/BuildPatchServices_Package.h"
#include "SDK/ClothingSystemRuntimeCommon_Package.h"
#include "SDK/ChaosCloth_Package.h"
#include "SDK/HeadMountedDisplay_Package.h"
#include "SDK/OculusHMD_Package.h"
#include "SDK/CustomMeshComponent_Package.h"
#include "SDK/OculusInput_Package.h"
#include "SDK/MeshDescription_Package.h"
#include "SDK/StaticMeshDescription_Package.h"
#include "SDK/MediaUtils_Package.h"
#include "SDK/MediaAssets_Package.h"
#include "SDK/Pickup_Health_Package.h"
#include "SDK/WeapGun_FireCameraShake_Package.h"
#include "SDK/MagicLeapLightEstimation_Package.h"
#include "SDK/AvfMediaFactory_Package.h"
#include "SDK/NiagaraCore_Package.h"
#include "SDK/MovieScene_Package.h"
#include "SDK/NiagaraShader_Package.h"
#include "SDK/Niagara_Package.h"
#include "SDK/SteamVRInputDevice_Package.h"
#include "SDK/Highrise_Collisions_Temp_Package.h"
#include "SDK/ChaosNiagara_Package.h"
#include "SDK/Pickup_AmmoGun_Package.h"
#include "SDK/Pickup_AmmoLauncher_Package.h"
#include "SDK/PlayerPawn_Package.h"
#include "SDK/PhysXVehicles_Package.h"
#include "SDK/OculusMR_Package.h"
#include "SDK/ProjRocket_Package.h"
#include "SDK/PropertyPath_Package.h"
#include "SDK/MovieSceneTracks_Package.h"
#include "SDK/UMG_Package.h"
#include "SDK/Synthesis_Package.h"
#include "SDK/AudioAnalyzer_Package.h"
#include "SDK/EyeTracker_Package.h"
#include "SDK/Highrise_Lights_Package.h"
#include "SDK/Highrise_Gameplay_Package.h"
#include "SDK/BotPawn_Package.h"
#include "SDK/ImgMedia_Package.h"
#include "SDK/MoviePlayer_Package.h"
#include "SDK/WmfMediaFactory_Package.h"
#include "SDK/TcpMessaging_Package.h"
#include "SDK/MagicLeap_Package.h"
#include "SDK/VectorVM_Package.h"
#include "SDK/MagicLeapARPin_Package.h"
#include "SDK/MagicLeapSharedWorld_Package.h"
#include "SDK/BP_Audio_Spline_Package.h"
#include "SDK/ImageWriteQueue_Package.h"
#include "SDK/WeapLauncher_Package.h"
#include "SDK/WeapGun_Package.h"
#include "SDK/ImageWrapper_Package.h"
#include "SDK/FieldSystemEngine_Package.h"
#include "SDK/GeometryCollectionEngine_Package.h"
#include "SDK/SignificanceManager_Package.h"
#include "SDK/UObjectPlugin_Package.h"
#include "SDK/AnimationSharing_Package.h"
#include "SDK/AppleImageUtils_Package.h"
#include "SDK/FacialAnimation_Package.h"
#include "SDK/ArchVisCharacter_Package.h"
#include "SDK/Overlay_Package.h"
#include "SDK/ClothingSystemRuntimeNv_Package.h"
#include "SDK/MagicLeapARPinInfoActor_Package.h"
#include "SDK/UdpMessaging_Package.h"
#include "SDK/Foliage_Package.h"
#include "SDK/LiveLinkInterface_Package.h"
#include "SDK/MaterialShaderQualitySettings_Package.h"
#include "SDK/MagicLeapEyeTracker_Package.h"
#include "SDK/EngineMessages_Package.h"
#include "SDK/Renderer_Package.h"
#include "SDK/GeometryCacheTracks_Package.h"
#include "SDK/AutomationUtils_Package.h"
#include "SDK/AssetTags_Package.h"
#include "SDK/InteractiveToolsFramework_Package.h"
#include "SDK/GooglePAD_Package.h"
#include "SDK/LocationServicesBPLibrary_Package.h"
#include "SDK/Highrise_Audio_Package.h"
#include "SDK/LuminRuntimeSettings_Package.h"
#include "SDK/AssetRegistry_Package.h"
#include "SDK/Landscape_Package.h"
#include "SDK/MagicLeapPrivileges_Package.h"
#include "SDK/MagicLeapSecureStorage_Package.h"
#include "SDK/TimeManagement_Package.h"
#include "SDK/MagicLeapHandMeshing_Package.h"
#include "SDK/DmgType_Instant_Package.h"
#include "SDK/BP_HoloController_Package.h"
#include "SDK/NetCore_Package.h"
#include "SDK/MagicLeapHandTracking_Package.h"
#include "SDK/EditableMesh_Package.h"
#include "SDK/MobilePatchingUtils_Package.h"
#include "SDK/ProceduralMeshComponent_Package.h"
#include "SDK/GeometryCollectionTracks_Package.h"
#include "SDK/AudioExtensions_Package.h"
#include "SDK/SoundFields_Package.h"
#include "SDK/DmgType_Explosion_Package.h"
#include "SDK/WeapLauncher_FireCameraShake_Package.h"
#include "SDK/OnlineSubsystemSteam_Package.h"
#include "SDK/JsonUtilities_Package.h"
#include "SDK/ImgMediaFactory_Package.h"
#include "SDK/MediaCompositing_Package.h"
#include "SDK/MotoSynth_Package.h"
#include "SDK/SteamVR_Package.h"
#include "SDK/HeroTPP_AnimBlueprint_Package.h"
#include "SDK/NiagaraAnimNotifies_Package.h"
#include "SDK/DmgTypeBP_Environmental_Package.h"
#include "SDK/Paper2D_Package.h"
#include "SDK/TemplateSequence_Package.h"
#include "SDK/ActorLayerUtilities_Package.h"
#include "SDK/LevelSequence_Package.h"
#include "SDK/MovieSceneCapture_Package.h"
#include "SDK/Highrise_Vista_Package.h"
#include "SDK/AudioSynesthesia_Package.h"
#include "SDK/ActorSequence_Package.h"
#include "SDK/TaskAlwaysTrue_Package.h"
#include "SDK/BotShootEnemy_Package.h"
#include "SDK/BotSearchEnemyLOS_Package.h"
#include "SDK/LightPropagationVolumeRuntime_Package.h"
#include "SDK/AugmentedReality_Package.h"
#include "SDK/Serialization_Package.h"
#include "SDK/MagicLeapAR_Package.h"
#include "SDK/ProjRocket_Explosion_Package.h"
#include "SDK/EngineSettings_Package.h"
#include "SDK/MagicLeapAudio_Package.h"
#include "SDK/HeroFPP_AnimationBlueprint_Package.h"