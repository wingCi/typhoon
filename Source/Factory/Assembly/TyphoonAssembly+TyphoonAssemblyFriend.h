////////////////////////////////////////////////////////////////////////////////
//
//  TYPHOON FRAMEWORK
//  Copyright 2013, Typhoon Framework Contributors
//  All Rights Reserved.
//
//  NOTICE: The authors permit you to use, modify, and distribute this file
//  in accordance with the terms of the license agreement accompanying it.
//
////////////////////////////////////////////////////////////////////////////////


#import "TyphoonAssembly.h"

@class TyphoonDefinitionBase;

@interface TyphoonAssembly (TyphoonAssemblyFriend)

+ (BOOL)selectorIsReserved:(SEL)selector;

- (void)prepareForUse;

- (NSArray *)definitions;

- (NSArray *)preattachedInfrastructureComponents;

- (Class)assemblyClassForKey:(NSString *)key;

@property (readonly) NSSet *definitionSelectors;

@end
