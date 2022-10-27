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
	 * BlueprintGeneratedClass A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C
	 * Size -> 0x0028 (FullSize[0x0290] - InheritedSize[0x0268])
	 */
	class UA_Beastmaster_Enrage_Base_C : public UOakAction_Anim_ActionAbility_Pet_Jabbermon
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0268(0x0008) Transient, DuplicateTransient
		class UParticleSystemComponent*                            PreTeleportFX;                                           // 0x0270(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             PetSpawnLoc;                                             // 0x0278(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SZYE[0x4];                                   // 0x0284(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABPPetEnrageRift_C*                                  Rift;                                                    // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void FirePetSummonStarted();
		void GetEnrageRiftActorClass(class UClass** res);
		void InitRegisterProperties();
		void GetPetSpawnLoc(struct FVector* res);
		void GetOwnerPet(class AOakCharacter** res);
		void DoPreTeleportEffects();
		void Notify_Skill();
		void Notify_SkillEnd();
		void OnBegin(class AActor* Actor);
		void OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
		void Notify_Rumble();
		void Notify_CS_Pitch();
		void Notify_CS_FoV();
		void ExecuteUbergraph_A_Beastmaster_Enrage_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
