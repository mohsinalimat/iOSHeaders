//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/SKUIEntityProviding-Protocol.h>

@class MusicEntityValueContext, MusicSectionEntityValueContext, NSIndexPath, NSSet, SKUIIndexBarEntry;
@protocol IKEntityValueProviding;

@protocol MusicEntityProviding <SKUIEntityProviding>
- (NSIndexPath *)indexPathForEntityValueContext:(MusicEntityValueContext *)arg1;
- (unsigned long long)sectionForSectionIndexBarEntryAtIndex:(unsigned long long)arg1;
- (SKUIIndexBarEntry *)indexBarEntryAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfIndexBarEntries;
- (void)configureSectionEntityValueContextOutput:(MusicSectionEntityValueContext *)arg1 forIndex:(unsigned long long)arg2;
- (void)configureEntityValueContextOutput:(MusicEntityValueContext *)arg1 forIndexPath:(NSIndexPath *)arg2;
- (void)configureEntityValueContextOutputForAnyIndexPath:(MusicEntityValueContext *)arg1;
- (unsigned long long)numberOfSections;
- (unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1;
- (_Bool)hasEntities;
- (id <IKEntityValueProviding>)entityValueProviderAtIndexPath:(NSIndexPath *)arg1;

@optional
- (_Bool)setEditing:(_Bool)arg1;
- (_Bool)hasMultipleEntitiesIncludingStoreContent;
- (_Bool)hasEntitiesNotInLibrary;
- (_Bool)hasExplicitContent;
- (NSSet *)additionalPropertiesToFetchSynchronouslyForEntityValueContext:(MusicEntityValueContext *)arg1;
@end

