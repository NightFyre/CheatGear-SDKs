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
	 * Class ServiceHttp.ServiceHttpSettings
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UServiceHttpSettings : public UObject
	{
	public:
		class FString                                              DiscoveryServiceUrl;                                     // 0x0028(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash
		EServiceHttpMetricsLevel                                   ServerMetricsLevel;                                      // 0x0038(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EServiceHttpMetricsLevel                                   ClientMetricsLevel;                                      // 0x0039(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5RPG[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ServiceHttp.DevelopmentAuthenticationSettings
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UDevelopmentAuthenticationSettings : public UObject
	{
	public:
		class FString                                              SandboxId;                                               // 0x0028(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash
		class FString                                              TokenServiceUrl;                                         // 0x0038(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash
		class FString                                              ClientId;                                                // 0x0048(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash
		class FString                                              ClientSecret;                                            // 0x0058(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash
		class FString                                              LivePrivileges;                                          // 0x0068(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
