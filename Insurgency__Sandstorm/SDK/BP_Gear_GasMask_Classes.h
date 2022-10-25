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
	 * DynamicClass BP_Gear_GasMask.BP_Gear_GasMask_C
	 * Size -> 0x0138 (FullSize[0x1850] - InheritedSize[0x1718])
	 */
	class ABP_Gear_GasMask_C : public AItemGoggles
	{
	public:
		unsigned char                                              UnknownData_5R8S[0x8];                                   // 0x1718(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AINSSoldier*                                         Soldier;                                                 // 0x1720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMeshComponent*                              HeadGearReference;                                       // 0x1728(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFoundHeadwear;                                          // 0x1730(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W2R6[0x7];                                   // 0x1731(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              FacewearReference;                                       // 0x1738(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                HeadMorph;                                               // 0x1740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EyewearHeadMorph;                                        // 0x1748(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMeshComponent*                              EyewearReference;                                        // 0x1750(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFoundEyewear;                                           // 0x1758(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DDTD[0x7];                                   // 0x1759(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              MergedMeshReference;                                     // 0x1760(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMeshComponent*                              HairReference;                                           // 0x1768(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsFemale;                                                // 0x1770(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEquipableState                                            K2Node_Event_State_2;                                    // 0x1771(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEquipableState                                            K2Node_Event_State;                                      // 0x1772(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_bEnabled;                                   // 0x1773(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_Visibility;                                 // 0x1774(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WP0W[0x3];                                   // 0x1775(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_Gear_GasMask_C*                                  K2Node_Event_Gasmask;                                    // 0x1778(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   K2Node_Event_Montage;                                    // 0x1780(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AINSSoldier*                                         K2Node_DynamicCast_AsINSSoldier;                         // 0x1788(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess;                             // 0x1790(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BG4T[0x7];                                   // 0x1791(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UINSSkeletalMeshComponent*                           CallFunc_GetEquipmentMesh_Mesh;                          // 0x1798(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UINSSkeletalMeshComponent*                           K2Node_Event_Carrier;                                    // 0x17A0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AINSSoldier*                                         K2Node_Event_Soldier;                                    // 0x17A8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UINSSkeletalMeshComponent*                           K2Node_CustomEvent_MeshComponent;                        // 0x17B0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UINSSkeletalMeshComponent*                           CallFunc_GetEquipmentMesh_Mesh_2;                        // 0x17B8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UABP_Character_C*                                    K2Node_Event_AnimInstance;                               // 0x17C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_Gunner;                                     // 0x17C8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_Passenger;                                  // 0x17C9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_bFirstPerson;                               // 0x17CA(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7W6D[0x5];                                   // 0x17CB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayerInventoryComponent*                           K2Node_Event_PlayerInventory;                            // 0x17D0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UINSSkeletalMeshComponent*                           K2Node_Event_Mesh;                                       // 0x17D8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UINSSkeletalMeshComponent*                           K2Node_Event_TargetComponent;                            // 0x17E0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_Enable;                                     // 0x17E8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_bProfile;                                   // 0x17E9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_bFemale;                                    // 0x17EA(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S8AY[0x5];                                   // 0x17EB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              K2Node_Event_Character;                                  // 0x17F0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ABP_Gear_BASE_Carrier_C*                             K2Node_Event_Carrier_2;                                  // 0x17F8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECarrierArmour                                             K2Node_Event_Combination;                                // 0x1800(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KLDB[0x3];                                   // 0x1801(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                K2Node_Event_Faction;                                    // 0x1804(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JGV4[0x4];                                   // 0x180C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimInstance*                                       K2Node_Event_GearAnimInstance;                           // 0x1810(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECarrierArmour                                             K2Node_Event_Combination_2;                              // 0x1818(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WBYY[0x3];                                   // 0x1819(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                K2Node_Event_Faction_2;                                  // 0x181C(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEquipableState                                            K2Node_Event_NewState;                                   // 0x1824(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_SwitchEnum_CmpSuccess;                            // 0x1825(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_20T7[0x2];                                   // 0x1826(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              K2Node_DynamicCast_AsCharacter_Anim_Interface[0x10];     // 0x1828(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		bool                                                       K2Node_DynamicCast_bSuccess_2;                           // 0x1838(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_838I[0x3];                                   // 0x1839(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate;                    // 0x183C(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QJEQ[0x4];                                   // 0x184C(0x0004) MISSED OFFSET (PADDING)

	public:
		void UserConstructionScript();
		void UpdatEquipmentOnBack(class UINSSkeletalMeshComponent* bpp__Carrier__pf, class AINSSoldier* bpp__Soldier__pf);
		void UpdateNightVisionState(EEquipableState bpp__State__pf);
		void UpdateInsurgentNVGState();
		void UpdateHeadgearEyewear(bool bpp__GasMaskEquipped__pf, class USharedCosmeticState* bpp__CosmeticState__pf);
		void UpdateGearCopyPoseAnim(bool bpp__Enable__pf, bool bpp__bProfile__pf, bool bpp__bFemale__pf, class USkeletalMeshComponent* bpp__Character__pf, class ABP_Gear_BASE_Carrier_C* bpp__Carrier__pf, ECarrierArmour bpp__Combination__pf, const class FName& bpp__Faction__pf);
		void UpdateGearBoneVisibility(bool bpp__Visibility__pf);
		void UpdateGasMaskState(EEquipableState bpp__State__pf);
		void UpdateGasmaskReference(class ABP_Gear_GasMask_C* bpp__Gasmask__pf);
		void UpdateCharacterBoneHide(class UABP_Character_C* bpp__AnimInstance__pf, bool bpp__Gunner__pf, bool bpp__Passenger__pf);
		void UpdateCharacterAnimInstance(class UAnimInstance* bpp__GearAnimInstance__pf, ECarrierArmour bpp__Combination__pf, const class FName& bpp__Faction__pf);
		void ToggleEyewear(bool bpp__Show__pf, class USkeletalMeshComponent* bpp__SkeletalMesh__pf);
		void SetupPreviewAttachment();
		void ResetEquipmentPhysics();
		void NewFunction_1();
		void MolotovRagState(bool bpp__bEnabled__pf);
		void MeshLoaded(class UINSSkeletalMeshComponent* bpp__MeshComponent__pf);
		void GetHeadCosmetic();
		void GetEquipmentMesh(class AINSSoldier* bpp__Soldier__pf, class UINSSkeletalMeshComponent** bpp__Mesh__pf);
		void GasMaskSetMorph(class UINSSkeletalMeshComponent* bpp__Mesh__pf);
		void BlueprintSpawnedPreviewActor(bool bpp__bFirstPerson__pf__const, class UPlayerInventoryComponent* bpp__PlayerInventory__pf);
		void BlueprintOnPickedUp();
		void BlueprintOnAttachMeshToPawn(class UINSSkeletalMeshComponent* bpp__Mesh__pf);
		void BlueprintInteractableStateChanged(EEquipableState bpp__NewState__pf);
		void BlendOutMontage(class UAnimSequenceBase* bpp__Montage__pf);
		void AttachGogglesToComponent(class UINSSkeletalMeshComponent* bpp__TargetComponent__pf);
		void AttachGasMaskWeapon();
		void AttachGasmaskSocket(class UINSSkeletalMeshComponent* bpp__CompositeGear__pf);
		void AttachGasMaskHead();
		void ItemMeshLoadedDelegate__DelegateSignature(class UINSSkeletalMeshComponent* bpp__MeshComponent__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
