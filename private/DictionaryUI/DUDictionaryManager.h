//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface DUDictionaryManager : NSObject
{
    NSArray *_availableDefinitionDictionaries;
}

+ (id)assetManager;
@property(readonly) NSArray *availableDefinitionDictionaries; // @synthesize availableDefinitionDictionaries=_availableDefinitionDictionaries;
- (void).cxx_destruct;
- (id)_currentlyAvailableDefinitionDictionaries;
- (id)_allAvailableDefinitionDictionariesUsingRemoteInfo:(_Bool)arg1;
- (id)_availableDictionaryAssets;
- (id)_availableDictionaryAssetsUsingRemoteInfo:(_Bool)arg1;
- (id)_definitionValuesForTerm:(id)arg1;
- (_Bool)_hasDefinitionForTerm:(id)arg1;
- (id)init;

@end

