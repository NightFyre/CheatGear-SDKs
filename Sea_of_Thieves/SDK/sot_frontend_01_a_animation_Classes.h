#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * BlueprintGeneratedClass sot_frontend_01_a_animation.sot_frontend_01_a_animation_C
	 * Size -> 0x0058 (FullSize[0x0428] - InheritedSize[0x03D0])
	 */
	class Asot_frontend_01_a_animation_C : public ALevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AStaticMeshActor*                                    shipSelectUI_title_14_ExecuteUbergraph_sot_frontend_01_a_animation_RefProperty; // 0x03D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class AStaticMeshActor*                                    shipSelectUI_gallion_10_ExecuteUbergraph_sot_frontend_01_a_animation_RefProperty; // 0x03E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class AStaticMeshActor*                                    shipSelectUI_sloop_12_ExecuteUbergraph_sot_frontend_01_a_animation_RefProperty; // 0x03E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class ASkeletalMeshActor*                                  shipSelect_CharMarker2_ExecuteUbergraph_sot_frontend_01_a_animation_RefProperty; // 0x03F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class ABP_PirateGenerator_LineUp_C*                        BP_PirateGenerator_LineUp_C_4_ExecuteUbergraph_sot_frontend_01_a_animation_RefProperty; // 0x03F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class AMatineeActor*                                       MatineeActor_ShipSelect_ExecuteUbergraph_sot_frontend_01_a_animation_RefProperty; // 0x0400(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class AMatineeActor*                                       MatineeActor_ShipSelect_UniqueObjectNameForCooking_1530807069_RefProperty; // 0x0408(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class ACameraActor*                                        ShipSelectScreenCam_UniqueObjectNameForCooking_1530807069_RefProperty; // 0x0410(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class AMatineeActor*                                       MatineeActor_ShipSelect_UniqueObjectNameForCooking_1530807072_RefProperty; // 0x0418(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor
		class ABP_PirateGenerator_LineUp_C*                        BP_PirateGenerator_LineUp_C_4_UniqueObjectNameForCooking_1530807072_RefProperty; // 0x0420(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void OnReturnToPirateSelection();
		void GetPirateSelector(class UPirateSelector** PirateSelectorComponent);
		void GetFrontendCameraComponent(class UFrontendCameraComponent** Frontend_Camera_Component);
		void goToShipSelCam();
		void ReceiveBeginPlay();
		void ShipSelect();
		void GenerateShipSelectionPirate();
		void HideShipSelectionPirate();
		void ExecuteUbergraph_sot_frontend_01_a_animation(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
