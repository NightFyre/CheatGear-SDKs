#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function GameService.GameServiceMapFunctions.UnregisterService
	 */
	struct UGameServiceMapFunctions_UnregisterService_Params
	{
	public:
		struct FGameServiceMap                                     ServiceMap;                                              // 0x0000(0x0070)  (Parm, OutParm, ReferenceParm)
		class UObject*                                             Service;                                                 // 0x0070(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameService.GameServiceMapFunctions.RegisterService
	 */
	struct UGameServiceMapFunctions_RegisterService_Params
	{
	public:
		struct FGameServiceMap                                     ServiceMap;                                              // 0x0000(0x0070)  (Parm, OutParm, ReferenceParm)
		class UObject*                                             Service;                                                 // 0x0070(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              Class;                                                   // 0x0078(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function GameService.GameServiceMapFunctions.GetService
	 */
	struct UGameServiceMapFunctions_GetService_Params
	{
	public:
		struct FGameServiceMap                                     ServiceMap;                                              // 0x0000(0x0070)  (Parm, OutParm, ReferenceParm)
		class UClass*                                              Class;                                                   // 0x0070(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		class UObject*                                             ReturnValue;                                             // 0x0078(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameService.GameServiceMapFunctions.GetNumServices
	 */
	struct UGameServiceMapFunctions_GetNumServices_Params
	{
	public:
		struct FGameServiceMap                                     ServiceMap;                                              // 0x0000(0x0070)  (Parm, OutParm, ReferenceParm)
		int32_t                                                    ReturnValue;                                             // 0x0070(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameService.GameServiceProviderInterface.UnregisterService
	 */
	struct UGameServiceProviderInterface_UnregisterService_Params
	{
	public:
		class UObject*                                             Service;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameService.GameServiceProviderInterface.RegisterService
	 */
	struct UGameServiceProviderInterface_RegisterService_Params
	{
	public:
		class UObject*                                             Service;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              Class;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function GameService.GameServiceProviderInterface.GetService
	 */
	struct UGameServiceProviderInterface_GetService_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		class UObject*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
