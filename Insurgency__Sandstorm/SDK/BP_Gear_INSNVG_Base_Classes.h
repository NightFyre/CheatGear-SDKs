#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * DynamicClass BP_Gear_INSNVG_Base.BP_Gear_INSNVG_Base_C
	 * Size -> 0x0168 (FullSize[0x1918] - InheritedSize[0x17B0])
	 */
	class ABP_Gear_INSNVG_Base_C : public ABP_Gear_NVG_C
	{
	public:
		class AProfileCharacter*                                   Profile;                                                 // 0x17B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UINSSkeletalMeshComponent*                           ProfileMesh;                                             // 0x17B8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCC_BASE_FACEWEAR_C*                                 FacewearReference;                                       // 0x17C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEquipableState                                            NVGInteractionState;                                     // 0x17C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DK61[0x7];                                   // 0x17C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCC_BASE_TORSO_C*                                    TorsoReference;                                          // 0x17D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AINSSoldier*                                         Soldier;                                                 // 0x17D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_bVisible;                                   // 0x17E0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_bPropagateToChildren;                       // 0x17E1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N2MB[0x6];                                   // 0x17E2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCC_INS_FACEWEAR_SmoothMask_BalaclavaEyehole_C*      K2Node_DynamicCast_AsCC_INS_FACEWEAR_Smooth_Mask_Balaclava_Eyehole; // 0x17E8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess;                             // 0x17F0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_True_if_break_was_hit_Variable;                // 0x17F1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2XA7[0x6];                                   // 0x17F2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UINSSkeletalMeshComponent*                           CallFunc_Array_Get_Item;                                 // 0x17F8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UINSSkeletalMeshComponent*                           CallFunc_Array_Get_Item_2;                               // 0x1800(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UINSSkeletalMeshComponent*                           CallFunc_Array_Get_Item_3;                               // 0x1808(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UINSSkeletalMeshComponent*                           K2Node_CustomEvent_MeshComponent;                        // 0x1810(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AINSSoldier*                                         K2Node_DynamicCast_AsINSSoldier;                         // 0x1818(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_2;                           // 0x1820(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4N8H[0x7];                                   // 0x1821(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UINSSkeletalMeshComponent*                           K2Node_Event_Mesh;                                       // 0x1828(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_bFirstPerson;                               // 0x1830(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8BRM[0x7];                                   // 0x1831(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayerInventoryComponent*                           K2Node_Event_PlayerInventory;                            // 0x1838(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEquipableState                                            K2Node_Event_NewState;                                   // 0x1840(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PJK1[0x7];                                   // 0x1841(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AProfileCharacter*                                   K2Node_DynamicCast_AsProfile_Character;                  // 0x1848(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_3;                           // 0x1850(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L8UD[0x7];                                   // 0x1851(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UINSSkeletalMeshComponent*                           K2Node_Event_TargetComponent;                            // 0x1858(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Temp_int_Loop_Counter_Variable;                          // 0x1860(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Temp_int_Array_Index_Variable;                           // 0x1864(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate;                    // 0x1868(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       K2Node_SwitchEnum_CmpSuccess;                            // 0x1878(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6YUE[0x7];                                   // 0x1879(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCC_INS_FACEWEAR_SmoothMask_BalaclavaEyehole_C*      K2Node_DynamicCast_AsCC_INS_FACEWEAR_Smooth_Mask_Balaclava_Eyehole_2; // 0x1880(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_4;                           // 0x1888(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0VC7[0x3];                                   // 0x1889(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate_2;                  // 0x188C(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_True_if_break_was_hit_Variable_2;              // 0x189C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G2GM[0x3];                                   // 0x189D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCosmeticItem*                                       CallFunc_Array_Get_Item_4;                               // 0x18A0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCC_BASE_FACEWEAR_C*                                 K2Node_DynamicCast_AsCC_BASE_FACEWEAR;                   // 0x18A8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_5;                           // 0x18B0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TJWS[0x7];                                   // 0x18B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCC_BASE_TORSO_C*                                    K2Node_DynamicCast_AsCC_BASE_TORSO;                      // 0x18B8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_6;                           // 0x18C0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8QSO[0x7];                                   // 0x18C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              K2Node_DynamicCast_AsCharacter_Anim_Interface[0x10];     // 0x18C8(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		bool                                                       K2Node_DynamicCast_bSuccess_7;                           // 0x18D8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G2KY[0x3];                                   // 0x18D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Temp_int_Loop_Counter_Variable_2;                        // 0x18DC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Temp_int_Array_Index_Variable_2;                         // 0x18E0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LB25[0x4];                                   // 0x18E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCosmeticItem*                                       CallFunc_Array_Get_Item_5;                               // 0x18E8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCC_BASE_FACEWEAR_C*                                 K2Node_DynamicCast_AsCC_BASE_FACEWEAR_2;                 // 0x18F0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_8;                           // 0x18F8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J94R[0x7];                                   // 0x18F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCC_BASE_TORSO_C*                                    K2Node_DynamicCast_AsCC_BASE_TORSO_2;                    // 0x1900(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_9;                           // 0x1908(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2ZPR[0x7];                                   // 0x1909(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UINSSkeletalMeshComponent*                           CallFunc_Array_Get_Item_6;                               // 0x1910(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void ReceiveBeginPlay();
		void OnThirdPersonMeshesVisibilityChanged(bool bpp__bVisible__pf, bool bpp__bPropagateToChildren__pf);
		void MeshLoaded(class UINSSkeletalMeshComponent* bpp__MeshComponent__pf);
		void MergedMesh();
		void BlueprintSpawnedPreviewActor(bool bpp__bFirstPerson__pf__const, class UPlayerInventoryComponent* bpp__PlayerInventory__pf);
		void BlueprintOnPickedUp();
		void BlueprintOnAttachMeshToPawn(class UINSSkeletalMeshComponent* bpp__Mesh__pf);
		void BlueprintInteractableStateChanged(EEquipableState bpp__NewState__pf);
		void AttachGogglesToComponent(class UINSSkeletalMeshComponent* bpp__TargetComponent__pf);
		void OnMergedMeshSetDelegate__DelegateSignature();
		void ItemMeshLoadedDelegate__DelegateSignature(class UINSSkeletalMeshComponent* bpp__MeshComponent__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
