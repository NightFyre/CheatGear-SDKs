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
	 * Class MerchantContracts.MerchantContractsBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMerchantContractsBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class FText STATIC_GetDateFromTimeLimit(float TimeLimit);
		static UClass* StaticClass();
	};

	/**
	 * Class MerchantContracts.MerchantContractsServiceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMerchantContractsServiceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MerchantContracts.MerchantContractsService
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UMerchantContractsService : public UObject
	{
	public:
		unsigned char                                              UnknownData_I6AU[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMerchantContract>                           Contracts;                                               // 0x0030(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_P76B[0x18];                                  // 0x0040(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MerchantContracts.PlayerMerchantContractsInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPlayerMerchantContractsInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MerchantContracts.PlayerMerchantContractsComponent
	 * Size -> 0x0018 (FullSize[0x00E0] - InheritedSize[0x00C8])
	 */
	class UPlayerMerchantContractsComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_SFGT[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPlayerMerchantContract>                     Contracts;                                               // 0x00D0(0x0010) Net, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
