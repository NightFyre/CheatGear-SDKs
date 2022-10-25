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
	 * BlueprintGeneratedClass CE_PlayerShared_Skills_Confuse_FixedVersion.CE_PlayerShared_Skills_Confuse_FixedVersion_C
	 * Size -> 0x0018 (FullSize[0x0180] - InheritedSize[0x0168])
	 */
	class UCE_PlayerShared_Skills_Confuse_FixedVersion_C : public UCE_PlayerShared_Skills_Confuse_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0168(0x0008) Transient, DuplicateTransient
		TArray<class AActor*>                                      AllChildActors;                                          // 0x0170(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance

	public:
		void On_Confuse_Target_death(class AActor* DamageReceiver, class AActor* DamageCauser);
		void ExecuteUbergraph_CE_PlayerShared_Skills_Confuse_FixedVersion(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
