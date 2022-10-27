#pragma once

/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * Class Qos.QosBeaconClient
	 * Size -> 0x0038 (FullSize[0x02E8] - InheritedSize[0x02B0])
	 */
	class AQosBeaconClient : public AOnlineBeaconClient
	{
	public:
		unsigned char                                              UnknownData_M21O[0x38];                                  // 0x02B0(0x0038) MISSED OFFSET (PADDING)

	public:
		void ServerQosRequest(const class FString& InSessionId);
		void ClientQosResponse(EQosResponseType Response);
		static UClass* StaticClass();
	};

	/**
	 * Class Qos.QosBeaconHost
	 * Size -> 0x0010 (FullSize[0x0258] - InheritedSize[0x0248])
	 */
	class AQosBeaconHost : public AOnlineBeaconHostObject
	{
	public:
		unsigned char                                              UnknownData_ZBIX[0x10];                                  // 0x0248(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Qos.QosEvaluator
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UQosEvaluator : public UObject
	{
	public:
		unsigned char                                              UnknownData_DAYC[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bInProgress;                                             // 0x0048(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bCancelOperation;                                        // 0x0049(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FRZO[0x6];                                   // 0x004A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDatacenterQosInstance>                      Datacenters;                                             // 0x0050(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5P5R[0x20];                                  // 0x0060(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Qos.QosRegionManager
	 * Size -> 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
	 */
	class UQosRegionManager : public UObject
	{
	public:
		int32_t                                                    NumTestsPerRegion;                                       // 0x0028(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      PingTimeout;                                             // 0x002C(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FQosRegionInfo>                              RegionDefinitions;                                       // 0x0030(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPrivate
		TArray<struct FQosDatacenterInfo>                          DatacenterDefinitions;                                   // 0x0040(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPrivate
		struct FDateTime                                           LastCheckTimestamp;                                      // 0x0050(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UQosEvaluator*                                       Evaluator;                                               // 0x0058(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EQosCompletionResult                                       QosEvalResult;                                           // 0x0060(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4Y4U[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRegionQosInstance>                          RegionOptions;                                           // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class FString                                              ForceRegionId;                                           // 0x0078(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bRegionForcedViaCommandline;                             // 0x0088(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NF51[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SelectedRegionId;                                        // 0x0090(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SHGL[0x20];                                  // 0x00A0(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
