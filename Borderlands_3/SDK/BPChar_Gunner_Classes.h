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
	 * BlueprintGeneratedClass BPChar_Gunner.BPChar_Gunner_C
	 * Size -> 0x0080 (FullSize[0x3668] - InheritedSize[0x35E8])
	 */
	class ABPChar_Gunner_C : public ABPChar_Player_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x35E8(0x0008) Transient, DuplicateTransient
		class UParticleSystemComponent*                            DeviceHologram3rd;                                       // 0x35F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                DLCActionSkillDevice3rd;                                 // 0x35F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFoleyAccessoryComponent*                            FoleyAccessory_Vest;                                     // 0x3600(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGbxSkeletalMeshComponent*                           SK_Play_Gunner_Base_Head;                                // 0x3608(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFaceFXComponent*                                    FaceFX;                                                  // 0x3610(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       Fire_And_Sprint_Enabled;                                 // 0x3618(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NSFF[0x3];                                   // 0x3619(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxAttributeFloat                                  Att_IronBearScalar_Armor;                                // 0x361C(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FGbxAttributeFloat                                  Att_IronBearScalar_CoreUse;                              // 0x3628(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FGbxAttributeInteger                                CQCMeleeFXNotify;                                        // 0x3634(0x000C) Edit, BlueprintVisible, Net, DisableEditOnInstance, HasGetValueTypeHash
		class AActor*                                              LastAutoBear;                                            // 0x3640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGbxAttributeFloat                                  Att_ClassMod_Gunner_ClassModL01Equipped;                 // 0x3648(0x000C) Edit, BlueprintVisible, Net, DisableEditOnInstance, HasGetValueTypeHash
		unsigned char                                              UnknownData_DCQP[0x4];                                   // 0x3654(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                DLCActionSkillDevice1st;                                 // 0x3658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            DeviceHologram1st;                                       // 0x3660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class UOakActionAbility* GetPrimaryActionAbility();
		void GetHeadMesh(class USkeletalMesh** HeadMesh);
		void UserConstructionScript();
		void SetGunnerDeviceVisible(bool Visible);
		void SetGunnerHologramVisible(bool Visible);
		void SetGunnerHologramTemplate(class UParticleSystem* Template);
		void ExecuteUbergraph_BPChar_Gunner(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
