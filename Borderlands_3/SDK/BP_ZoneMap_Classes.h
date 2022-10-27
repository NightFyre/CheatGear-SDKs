#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_ZoneMap.BP_ZoneMap_C
	 * Size -> 0x03DC (FullSize[0x112C] - InheritedSize[0x0D50])
	 */
	class ABP_ZoneMap_C : public AZoneMapViewer
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0D50(0x0008) Transient, DuplicateTransient
		class USceneComponent*                                     ZoneMapRoot;                                             // 0x0D58(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     GalaxyRoot;                                              // 0x0D60(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     PlanetRoot;                                              // 0x0D68(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_Scale_Value_Alpha_667EFD5B4E33FEA7CFC9F9A263A3FAC9; // 0x0D70(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_Material_Transition_Alpha_667EFD5B4E33FEA7CFC9F9A263A3FAC9; // 0x0D74(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_667EFD5B4E33FEA7CFC9F9A263A3FAC9;  // 0x0D78(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GTOY[0x7];                                   // 0x0D79(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x0D80(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Planet_From_Galaxy_Scale_Value_Alpha_2167DE04416C0E119BF1AB8B5E3B5558; // 0x0D88(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Planet_From_Galaxy_Material_Transition_Alpha_2167DE04416C0E119BF1AB8B5E3B5558; // 0x0D8C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Planet_From_Galaxy__Direction_2167DE04416C0E119BF1AB8B5E3B5558; // 0x0D90(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LQ44[0x7];                                   // 0x0D91(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Planet_From_Galaxy;                                      // 0x0D98(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Planet_To_Level_Scale_Target_Alpha_7FB3407745CCE41E8DD14E88E9B54E01; // 0x0DA0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Planet_To_Level_Material_Transition_Alpha_7FB3407745CCE41E8DD14E88E9B54E01; // 0x0DA4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Planet_To_Level__Direction_7FB3407745CCE41E8DD14E88E9B54E01; // 0x0DA8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_57GG[0x7];                                   // 0x0DA9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Planet_To_Level;                                         // 0x0DB0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Galaxy_To_Planet_Fade_Alpha_991057714C53A17AFEA624BAEA6A25FD; // 0x0DB8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Galaxy_To_Planet_Camera_Arm_Alpha_991057714C53A17AFEA624BAEA6A25FD; // 0x0DBC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Galaxy_To_Planet_Transform_Alpha_991057714C53A17AFEA624BAEA6A25FD; // 0x0DC0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Galaxy_To_Planet_Pitch_Alpha_991057714C53A17AFEA624BAEA6A25FD; // 0x0DC4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Galaxy_To_Planet__Direction_991057714C53A17AFEA624BAEA6A25FD; // 0x0DC8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1KC7[0x7];                                   // 0x0DC9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Galaxy_To_Planet;                                        // 0x0DD0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Planet_to_Galaxy_Scale_Target_Alpha_A2953A8C431FB857A3FF839AF86D2831; // 0x0DD8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Planet_to_Galaxy_Material_Transition_Alpha_A2953A8C431FB857A3FF839AF86D2831; // 0x0DDC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Planet_to_Galaxy__Direction_A2953A8C431FB857A3FF839AF86D2831; // 0x0DE0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8XFF[0x7];                                   // 0x0DE1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Planet_to_Galaxy;                                        // 0x0DE8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_1_Scale_Value_Alpha_143D312D4730AE7BD464D192A5B81B5D; // 0x0DF0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_1_Material_Transition_Alpha_143D312D4730AE7BD464D192A5B81B5D; // 0x0DF4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_1__Direction_143D312D4730AE7BD464D192A5B81B5D;  // 0x0DF8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FQJM[0x7];                                   // 0x0DF9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_2;                                              // 0x0E00(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Dismiss_Animation_Alpha_115B5F9042CF9F4F3F29778C38861C87; // 0x0E08(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Dismiss_Material_Transition_Alpha_115B5F9042CF9F4F3F29778C38861C87; // 0x0E0C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Dismiss__Direction_115B5F9042CF9F4F3F29778C38861C87;     // 0x0E10(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QG2W[0x7];                                   // 0x0E11(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Dismiss;                                                 // 0x0E18(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Alpha_Opacity_Alpha_513EE17043A3593D71D2DDA2479C5D03;    // 0x0E20(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Alpha_Animation_Interpolation_Alpha_513EE17043A3593D71D2DDA2479C5D03; // 0x0E24(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Alpha_Distortion_513EE17043A3593D71D2DDA2479C5D03;       // 0x0E28(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Alpha_Display_Radius_Alpha_513EE17043A3593D71D2DDA2479C5D03; // 0x0E2C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Alpha_Alpha_513EE17043A3593D71D2DDA2479C5D03;            // 0x0E30(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Alpha__Direction_513EE17043A3593D71D2DDA2479C5D03;       // 0x0E34(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RVC1[0x3];                                   // 0x0E35(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Alpha;                                                   // 0x0E38(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Rotation_Speed;                                          // 0x0E40(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_49TN[0x4];                                   // 0x0E44(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AOakPlayerController*                                Owning_Controller;                                       // 0x0E48(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		TArray<class UObject*>                                     POI_Actors;                                              // 0x0E50(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class UStaticMeshComponent*                                Player_Widget;                                           // 0x0E60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Point_Cloud_PS;                                          // 0x0E68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTextureRenderTarget2D*                              Fog_Of_Discovery_Texture;                                // 0x0E70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UProceduralMeshComponent*                            Deco_Mesh_Component;                                     // 0x0E78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FZoneMapSection>                             Zone_Map_Sections;                                       // 0x0E80(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    Active_Section_Index;                                    // 0x0E90(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bDisableZoneConstraints;                                 // 0x0E94(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5UE1[0x3];                                   // 0x0E95(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UZoneMapData*                                        Zone_Map_Data;                                           // 0x0E98(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTextureRenderTarget2D*                              SceneCapture;                                            // 0x0EA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            DMI_SceneBlur;                                           // 0x0EA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTextureRenderTarget2D*                              BlurredScene;                                            // 0x0EB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPlanetMapData_C*                                    Planet_Map_Data;                                         // 0x0EB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class AOakPlayerState*, class UStaticMeshComponent*>  PartyMembers;                                            // 0x0EC0(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class UMaterialInstanceDynamic*                            Background_DMI;                                          // 0x0F10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UGFxMapMenu*                                         Owning_Menu;                                             // 0x0F18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EZoneMapMode                                               Map_Mode;                                                // 0x0F20(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QT8S[0x7];                                   // 0x0F21(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                Zone_Map_Grid;                                           // 0x0F28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Compass;                                                 // 0x0F30(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bDisplayingLoadedLevel;                                  // 0x0F38(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bExitingMap;                                             // 0x0F39(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SV48[0x6];                                   // 0x0F3A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_ZoneMap_Planet_C*                                Planet_Actor;                                            // 0x0F40(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Planet_Map_Mesh;                                         // 0x0F48(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bPendingGalaxyMap;                                       // 0x0F50(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bTransitioning;                                          // 0x0F51(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDebugMode;                                              // 0x0F52(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D3YZ[0x1];                                   // 0x0F53(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DeltaSeconds;                                            // 0x0F54(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Background_Opacity;                                      // 0x0F58(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DSKT[0x4];                                   // 0x0F5C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Desired_Level_Name;                                      // 0x0F60(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             On_Close_Planet_Mode;                                    // 0x0F70(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             On_Close_Galaxy_Mode;                                    // 0x0F80(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             On_Close_Level_Mode;                                     // 0x0F90(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class UObject*>                                     Planet_Map_POI_Travel_Stations;                          // 0x0FA0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class ABP_PlanetPOI_C*>                             Planet_Map_POI_Zones;                                    // 0x0FB0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		struct FTransform                                          Desired_Transform;                                       // 0x0FC0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Star_Opacity;                                            // 0x0FF0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1650[0x4];                                   // 0x0FF4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_FogOfDiscoveryManager_C*                         Fog_Of_Discovery_Manager;                                // 0x0FF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            Level_Map_Projection_DMI;                                // 0x1000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_ZoneMap_Galaxy_C*                                GalaxyActor;                                             // 0x1008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Galaxy_Current_Pitch_Delta;                              // 0x1010(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Galaxy_Current_Yaw_Delta;                                // 0x1014(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ABP_GalaxyPOI_C*>                             Galaxy_Map_POIs;                                         // 0x1018(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate
		struct FRotator                                            Galaxy_Camera_Rotation_Target;                           // 0x1028(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3AMX[0x4];                                   // 0x1034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGalaxyMapData_C*                                    GalaxyData;                                              // 0x1038(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Planet_Current_Yaw_Delta;                                // 0x1040(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Planet_Current_Pitch_Delta;                              // 0x1044(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            Planet_Camera_Rotation_Target;                           // 0x1048(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ZoomSpeedModifier_Tuning;                                // 0x1054(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Planet_Rot_Pitch;                                        // 0x1058(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Planet_Rot_Spin;                                         // 0x105C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    DEBUG_PlanetPOIIndex;                                    // 0x1060(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Planet_POI_Bounds_Origin;                                // 0x1064(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            CurrentRotation;                                         // 0x1070(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GPG6[0x4];                                   // 0x107C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              test_FocusedZone;                                        // 0x1080(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UOakProfile*                                         Player_Profile;                                          // 0x1088(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      POI_Magnetism_Trigger_Distance_Multiplier;               // 0x1090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            Planet_Rotation_Target;                                  // 0x1094(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UOakProfile*                                         Oak_Profile;                                             // 0x10A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Local_Max_Yaw;                                           // 0x10A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            Planet_Gimble_Target;                                    // 0x10AC(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Max_Height;                                              // 0x10B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Transform_Target_Keyframe;                               // 0x10BC(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Rotation_Pitch_Target_Keyframe;                          // 0x10C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Scale_Target_Keyframe;                                   // 0x10CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bEnablePlanetRotation;                                   // 0x10D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NDI8[0x3];                                   // 0x10D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Cached_Camera_Location;                                  // 0x10D4(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            Cache_LevelMap_Rotation;                                 // 0x10E0(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Cache_LevelMap_Scale;                                    // 0x10EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bPendingSanctuary3;                                      // 0x10F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DOFK[0x3];                                   // 0x10F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Scale_Target_Keyfraome1;                                 // 0x10F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EZoneMapMode                                               Previous_Map_Mode;                                       // 0x10F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_638I[0x3];                                   // 0x10F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Trace_Length;                                            // 0x10FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ZTraceDistance;                                          // 0x1100(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Transform_Delta;                                         // 0x1104(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UZoneMapData_Base_C*                                 PlanetMap_FocusedZone;                                   // 0x1110(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            PlanetMap_Magnetism;                                     // 0x1118(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      PlanetGalaxyZoomTargetMin;                               // 0x1124(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PlanetGalaxyZoomTargetMax;                               // 0x1128(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void PlanetMap_ZoneMagnetism(bool* Magnetized);
		void Initialize_Level_Map_DMIs();
		void Set_Keyframes(const struct FVector& Transform_Target_Keyframe, float Rotation_Pitch_Target_Keyframe, float Scale_Target_Keyframe);
		void Clear_Keyframes();
		void Get_Planet_Gimbal_Target();
		void Get_Planet_and_Galaxy_Scale_Target();
		void Get_Planet_Rotation_Target();
		void Initialize_LevelMap_Camera_Properties();
		void SetGamma(float Gamma);
		void Planet_Recenter(bool bInstant);
		void SetCameraLag(bool Location_Lag, bool Rotation_Lag, float Location_Lag_Speed, float Rotation_Lag_Speed);
		void ViewChanged(bool bShowingZoneMap);
		void Update_ZoneMap_DMIs();
		void FocusOnPlanet(class UPlanetData* Planet);
		void SpawnGalaxyMapPOIs(class UGalaxyMapData_C* Galaxy_Map_Data);
		void GetGalaxyRotationTarget(float DeltaSeconds);
		void SetLevelMapPostProcess();
		bool K2_GetRotationYawTarget(float DeltaSeconds, float YawMin, float YawMax);
		bool K2_GetRotationPitchTarget(float DeltaSeconds);
		bool K2_GetNewTransformTarget(float DeltaSeconds, const struct FVector& TransformMin, const struct FVector& TransformMax, float TransformBuffer, float GlobalTransformScale, float ZoomDelta);
		bool K2_GetNewScaleTarget(float DeltaSeconds, float* ZoomDelta);
		bool K2_UpdateTransforms(float DeltaSeconds);
		void SetVisibleRadiusBP(TArray<class UMaterialInstanceDynamic*>* DMIArray, float Alpha, float RadiusAlpha, float Distortion);
		void LevelMapTickNative();
		void Set_Transitioning(bool transitioning);
		void Set_Global_LUT_Visibility(bool Visibile);
		void Get_New_Scale_Target(float Delta_Seconds, float Scale_Min, float Scale_Max, float Scale_Rate, float* Zoom_Delta);
		float Get_Normalized_Distance_To_POI_Center(class USphereComponent* POI_Collision_Sphere, const struct FVector& Hit_Location);
		void Reset_Axis_Input();
		bool K2_HandleInputAction(const class FName& InputAction);
		bool K2_HandleAxisInput(const class FName& InputAction, float AxisValue);
		void Update_Party_Memeber_Locations();
		void Focus_Level(class UZoneMapData* Level, bool bInstant);
		struct FRotator Get_Rotation_For_Level_Transition();
		void TransitionToLevel(class UZoneMapData* Level_Data);
		void TransitionToPlanet(class UPlanetMapData_C* Planet_Map_Data);
		void Get_Default_Level_Map_Pivot(struct FVector* Point_Of_Interest_Transform_Location);
		void Base_Tick(float Delta_Seconds);
		void DestroyGalaxyMapComponents();
		void GalaxyMapTick();
		void InitializeMapForGalaxy(class UGalaxyMapData_C* Galaxy_Map_Data);
		void Destroy_Planet_Map_Components();
		void Destroy_Map_Actor();
		void Get_Rotation_Pitch_Target(float DeltaSeconds);
		void Get_Rotation_Yaw_Target(float Delta_Seconds, float YawMin, float YawMax);
		void Planet_Map_Tick();
		void Level_Map_Tick();
		void Create_Compass_and_Grid();
		void InitializeMapForPlanet(class UPlanetData* Planet_Data);
		void Set_Pivot_to_Actor_World_Location(const struct FVector& World_Location);
		void Destroy_Level_Map_Components();
		void Get_New_Transform_Target(float Delta_Seconds, const struct FVector& TransformMin, const struct FVector& TransformMax, float TransformBuffer, float Global_Transform_Scale, float Zoom_Delta);
		void Add_Zone_Map_Mesh_Sections(class UZoneMapMeshData* Zone_Map_Mesh_Data);
		void Get_Player_s_Current_Zone_Section(int32_t* Section_Index);
		void Cycle_Zone_Map_Sections(int32_t Direction);
		void Box_Constraint(const struct FVector& Vector_To_Constrain, const struct FVector& Bounds_Origin, const struct FVector& Bounds_Extent, struct FVector* Result);
		void Initialize_Point_Cloud_Particle_System(class UZoneMapMeshData* Zone_Map_Mesh_Data);
		void Update_Transforms_For_Level_Map(float Delta_Seconds);
		void InitializeMapForLevel(class UZoneMapData* Level_Map_Data);
		void Set_Pivot_To_Actor(class AActor* Actor, bool bInstant);
		void Reset_Map_Orienation(bool Snap_to_Player, bool Reset_Orientation, bool Instant);
		void Add_Decoration_Meshes();
		void UserConstructionScript();
		void Alpha__FinishedFunc();
		void Alpha__UpdateFunc();
		void Alpha__Transition_Done__EventFunc();
		void Dismiss__FinishedFunc();
		void Dismiss__UpdateFunc();
		void Galaxy_To_Planet__FinishedFunc();
		void Galaxy_To_Planet__UpdateFunc();
		void Planet_From_Galaxy__FinishedFunc();
		void Planet_From_Galaxy__UpdateFunc();
		void Planet_From_Galaxy__Transition_Over__EventFunc();
		void Timeline_1__FinishedFunc();
		void Timeline_1__UpdateFunc();
		void Timeline_1__Transition_Over__EventFunc();
		void Planet_to_Galaxy__FinishedFunc();
		void Planet_to_Galaxy__UpdateFunc();
		void Planet_To_Level__FinishedFunc();
		void Planet_To_Level__UpdateFunc();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void Timeline_0__Transition_Over__EventFunc();
		void InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_16(const struct FKey& Key);
		void InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_15(const struct FKey& Key);
		void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_14(const struct FKey& Key);
		void InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_13(const struct FKey& Key);
		void InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_12(const struct FKey& Key);
		void InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_11(const struct FKey& Key);
		void InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_10(const struct FKey& Key);
		void InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_9(const struct FKey& Key);
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void ReceiveDestroyed();
		void GbxMenu_RightStickAxisX(float Axis_Value);
		void GbxMenu_RightStickAxisY(float Axis_Value);
		void OakMenu_MapZoomOut(float Axis_Value);
		void OakMenu_MapZoomIn(float Axis_Value);
		void Stop_Level_Map_Effects();
		void Open_Parent_Menu();
		void Shutdown_Map(bool bInstantShutdown);
		void GbxMenu_LeftStickAxisX(float Axis_Value);
		void GbxMenu_LeftStickAxisY(float Axis_Value);
		void Play_Planet_Map_Effects();
		void Stop_Planet_Map_Effects();
		void Play_Galaxy_Map_Effects();
		void Stop_Galaxy_Map_Effects();
		void Close_Level_Mode();
		void Close_Planet_Mode();
		void On_Completed_Dismissal_Effects();
		void Close_Galaxy_Mode();
		void Set_Local_Waypoint();
		void Manual_Recenter();
		void K2_GotoLevelMap(class UZoneMapData* InLevelData);
		void K2_GotoPlanetMap(class UPlanetData* InPlanetData);
		void K2_GotoParentMap();
		void K2_ResetAxisInput();
		void K2_FocusOnTransform(const struct FTransform& Transform);
		void K2_CenterOnPlayer();
		void K2_FocusOnLevel(class UZoneMapData* Level);
		void K2_FocusOnPlanet(class UPlanetData* Planet);
		void K2_SetCustomWaypoint();
		void K2_PostLoadedMapMesh();
		void K2_OnMiniMapShown();
		void K2_OnEchoOpened();
		void K2_OnZoneMapShown();
		void K2_OnEchoClosed();
		void CustomEvent_1(class AActor* NewlyFocusedPOI);
		void DEBUG_Cycle_Planet_Map_POIs();
		void Play_Level_Map_Effects();
		void K2_OnZoneMapHidden();
		void K2_PostLoadedPlanetClass();
		void ExecuteUbergraph_BP_ZoneMap(int32_t EntryPoint);
		void On_Close_Level_Mode__DelegateSignature();
		void On_Close_Galaxy_Mode__DelegateSignature();
		void On_Close_Planet_Mode__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
