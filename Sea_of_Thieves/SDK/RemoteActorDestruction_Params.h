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
	 * Function RemoteActorDestruction.RemoteActorDestructionInterface.DestroyExistingActors
	 */
	struct URemoteActorDestructionInterface_DestroyExistingActors_Params
	{
	public:
		TArray<class UClass*>                                      ClassesToDestroy;                                        // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper)
	};

	/**
	 * Function RemoteActorDestruction.RemoteActorDestructionInterface.DestroyActor
	 */
	struct URemoteActorDestructionInterface_DestroyActor_Params
	{
	public:
		struct FDestroyActorData                                   DestroyActorData;                                        // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
