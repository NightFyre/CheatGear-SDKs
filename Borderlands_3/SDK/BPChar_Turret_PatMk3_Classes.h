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
	 * BlueprintGeneratedClass BPChar_Turret_PatMk3.BPChar_Turret_PatMk3_C
	 * Size -> 0x0010 (FullSize[0x241D] - InheritedSize[0x240D])
	 */
	class ABPChar_Turret_PatMk3_C : public ABPChar_TedioreTurret_SMG_C
	{
	public:
		unsigned char                                              UnknownData_4M4W[0x3];                                   // 0x240D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x2410(0x0008) Transient, DuplicateTransient
		int32_t                                                    ShotCounter;                                             // 0x2418(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LegendaryTurret;                                         // 0x241C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void Fired(class AWeapon* EventWeapon);
		void ExecuteUbergraph_BPChar_Turret_PatMk3(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
