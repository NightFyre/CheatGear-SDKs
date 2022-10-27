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
	 * Class KnockbackFramework.KnockbackInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UKnockbackInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class KnockbackFramework.KnockbackColliderComponent
	 * Size -> 0x0088 (FullSize[0x0670] - InheritedSize[0x05E8])
	 */
	class UKnockbackColliderComponent : public UBoxComponent
	{
	public:
		struct FCollisionProfileName                               SolidCollisionProfile;                                   // 0x05E8(0x0008) Edit
		struct FCollisionProfileName                               KnockbackTraceProfile;                                   // 0x05F0(0x0008) Edit
		EKnockbackType                                             KnockbackType;                                           // 0x05F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_X3N1[0x3];                                   // 0x05F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKnockBackInfo                                      KnockbackParams;                                         // 0x05FC(0x0050) Edit
		TWeakObjectPtr<class AActor>                               ActorToTarget;                                           // 0x064C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper
		unsigned char                                              UnknownData_KXN0[0x4];                                   // 0x0654(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              KnockbackDamageType;                                     // 0x0658(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      KnockbackInterval;                                       // 0x0660(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_28ZE[0x4];                                   // 0x0664(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ESolidState                                                SolidState;                                              // 0x0668(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SBA5[0x7];                                   // 0x0669(0x0007) MISSED OFFSET (PADDING)

	public:
		void OnRep_SolidState();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
