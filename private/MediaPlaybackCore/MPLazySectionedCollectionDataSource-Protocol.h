//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlaybackCore/NSObject-Protocol.h>

@class NSArray, NSIndexPath;
@protocol MPLazySectionedCollectionDataSource;

@protocol MPLazySectionedCollectionDataSource <NSObject>
- (id)itemAtIndexPath:(NSIndexPath *)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;

@optional
- (_Bool)hasSameContentAsDataSource:(id <MPLazySectionedCollectionDataSource>)arg1;
- (long long)indexOfSectionForSectionIndexTitleAtIndex:(long long)arg1;
- (struct _NSRange)optionalSectionIndexTitlesRange;
- (NSArray *)sectionIndexTitles;
@end

