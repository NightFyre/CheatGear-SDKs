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
	 * Class ExplosionFramework.CreateActorInstanceOnExplodeComponent
	 * Size -> 0x0060 (FullSize[0x0128] - InheritedSize[0x00C8])
	 */
	class UCreateActorInstanceOnExplodeComponent : public UActorComponent
	{
	public:
		class UClass*                                              ActorToInstance;                                         // 0x00C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_KSJK[0x58];                                  // 0x00D0(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ExplosionFramework.ExplosionInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UExplosionInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ExplosionFramework.ExplosionReceiverInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UExplosionReceiverInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ExplosionFramework.ExplosiveComponentInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UExplosiveComponentInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ExplosionFramework.FuseInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFuseInterface : public UInterface
	{
	public:
		bool GetIsActive();
		static UClass* StaticClass();
	};

	/**
	 * Class ExplosionFramework.StatusResponseExplodeAfterTime
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UStatusResponseExplodeAfterTime : public UStatusResponse
	{
	public:
		float                                                      MinTimeUntilExplosion;                                   // 0x0030(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxTimeUntilExplosion;                                   // 0x0034(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CR7U[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              CachedWorld;                                             // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ExplosionFramework.TaleQuestFuseFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0178] - InheritedSize[0x0178])
	 */
	class UTaleQuestFuseFunctionLibrary : public UTaleQuestFunctionStepLibrary
	{
	public:
		void STATIC_TriggerFuse(class AActor* InFuseActor);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
