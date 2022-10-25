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
	 * Class GameService.ServiceProviderGameState
	 * Size -> 0x0120 (FullSize[0x0540] - InheritedSize[0x0420])
	 */
	class AServiceProviderGameState : public AGameState
	{
	public:
		unsigned char                                              UnknownData_WPGF[0x120];                                 // 0x0420(0x0120) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameService.GameServiceLifecycleInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGameServiceLifecycleInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameService.GameServiceMapFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGameServiceMapFunctions : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_UnregisterService(struct FGameServiceMap* ServiceMap, class UObject* Service);
		void STATIC_RegisterService(struct FGameServiceMap* ServiceMap, class UObject* Service, class UClass* Class);
		class UObject* STATIC_GetService(struct FGameServiceMap* ServiceMap, class UClass* Class);
		int32_t STATIC_GetNumServices(struct FGameServiceMap* ServiceMap);
		static UClass* StaticClass();
	};

	/**
	 * Class GameService.GameServiceProviderInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGameServiceProviderInterface : public UInterface
	{
	public:
		void UnregisterService(class UObject* Service);
		void RegisterService(class UObject* Service, class UClass* Class);
		class UObject* GetService(class UClass* Class);
		static UClass* StaticClass();
	};

	/**
	 * Class GameService.GameServiceTickInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGameServiceTickInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
