//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FuseUI/MusicEntityProviding-Protocol.h>

@class MusicCompleteOfferEntityProvider, MusicShowCompleteCollectionEntityValueProvider, NSString;

@interface MusicShowCompleteCollectionEntityProvider : NSObject <MusicEntityProviding>
{
    MusicShowCompleteCollectionEntityValueProvider *_showCompleteCollectionEntityValueProvider;
    _Bool _shouldIncludeShowCompleteButton;
    MusicCompleteOfferEntityProvider *_completeOfferEntityProvider;
    NSString *_localizedTitle;
}

@property(copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(readonly, nonatomic) MusicCompleteOfferEntityProvider *completeOfferEntityProvider; // @synthesize completeOfferEntityProvider=_completeOfferEntityProvider;
- (void).cxx_destruct;
- (void)_updateShouldIncludeShowCompleteButton;
- (id)_showCompleteCollectionEntityValueProvider;
- (void)_completeOfferEntityProviderStoreCompleteOfferAvailableDidChangeNotification:(id)arg1;
@property(nonatomic) _Bool shouldIncludeStoreCompleteOffer;
- (unsigned long long)sectionForSectionIndexBarEntryAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (unsigned long long)numberOfIndexBarEntries;
- (unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1;
- (id)indexPathForEntityValueContext:(id)arg1;
- (id)indexBarEntryAtIndex:(unsigned long long)arg1;
- (_Bool)hasEntitiesNotInLibrary;
- (_Bool)hasEntities;
- (id)entityValueProviderAtIndexPath:(id)arg1;
- (void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2;
- (void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1;
- (void)dealloc;
- (id)initWithCompleteOfferEntityProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

