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
	 * Class Siren.SirenTeleportAIAbilityType
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USirenTeleportAIAbilityType : public UAthenaAIAbilityType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Siren.DistantIdleAIAbility
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class UDistantIdleAIAbility : public UAthenaAIAbility
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Siren.DistantIdleAIAbilityParams
	 * Size -> 0x0000 (FullSize[0x00C8] - InheritedSize[0x00C8])
	 */
	class UDistantIdleAIAbilityParams : public UAthenaAIAbilityParams
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Siren.DistantIdleAIAbilityType
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDistantIdleAIAbilityType : public UAthenaAIAbilityType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Siren.ScratchAIAbility
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UScratchAIAbility : public UMeleeAIAbility
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Siren.ScratchAIAbilityParams
	 * Size -> 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
	 */
	class UScratchAIAbilityParams : public UMeleeAIAbilityParams
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Siren.ScratchAIAbilityType
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UScratchAIAbilityType : public UAthenaAIAbilityType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Siren.SirenCalmHealStrategyId
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USirenCalmHealStrategyId : public UAIStrategyId
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Siren.SirenController
	 * Size -> 0x0008 (FullSize[0x09D8] - InheritedSize[0x09D0])
	 */
	class ASirenController : public AAthenaSwimmingAIController
	{
	public:
		unsigned char                                              UnknownData_9PTS[0x8];                                   // 0x09D0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Siren.SirenEmeraldHealStatus
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class USirenEmeraldHealStatus : public UStatusBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Siren.SirenPartsDesc
	 * Size -> 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
	 */
	class USirenPartsDesc : public UMeshMemoryConstraintsAIPartsDesc
	{
	public:
		class UClass*                                              AnimationID;                                             // 0x0080(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Siren.SirenRubyHealStatus
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class USirenRubyHealStatus : public UStatusBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Siren.SirenSapphireHealStatus
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class USirenSapphireHealStatus : public UStatusBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Siren.SirenScratchRespiteStrategyId
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USirenScratchRespiteStrategyId : public UAIStrategyId
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Siren.SirenScratchStrategyId
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USirenScratchStrategyId : public UAIStrategyId
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Siren.SirenSongAIAbility
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class USirenSongAIAbility : public UAthenaAIAbility
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Siren.SirenSongAIAbilityParams
	 * Size -> 0x0000 (FullSize[0x00C8] - InheritedSize[0x00C8])
	 */
	class USirenSongAIAbilityParams : public UAthenaAIAbilityParams
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Siren.SirenSongAIAbilityType
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USirenSongAIAbilityType : public UAthenaAIAbilityType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Siren.SirenTeleportAIAbility
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class USirenTeleportAIAbility : public UTeleportAIAbility
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Siren.SirenTeleportAIAbilityParams
	 * Size -> 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
	 */
	class USirenTeleportAIAbilityParams : public UTeleportAIAbilityParams
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
