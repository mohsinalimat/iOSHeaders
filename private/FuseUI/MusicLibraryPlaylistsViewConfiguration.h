//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/MusicLibraryBrowseTableViewConfiguration.h>

@class NSMutableSet, NSNumber, NSSet, NSString;

@interface MusicLibraryPlaylistsViewConfiguration : MusicLibraryBrowseTableViewConfiguration
{
    NSMutableSet *_additionalQueryFilterPredicates;
    _Bool _playlistsFilterIsCuratorID;
    unsigned long long _playlistsConfigurationOptions;
    NSString *_playlistsFilter;
    NSNumber *_parentFolderPersistentID;
}

+ (void)getDetailViewController:(id *)arg1 playbackContext:(id *)arg2 forEntityValueContext:(id)arg3 sourceViewController:(id)arg4;
@property(retain, nonatomic) NSNumber *parentFolderPersistentID; // @synthesize parentFolderPersistentID=_parentFolderPersistentID;
@property(copy, nonatomic) NSString *playlistsFilter; // @synthesize playlistsFilter=_playlistsFilter;
@property(nonatomic) unsigned long long playlistsConfigurationOptions; // @synthesize playlistsConfigurationOptions=_playlistsConfigurationOptions;
- (void).cxx_destruct;
- (void)_handleDeletionOfEntityValueProvider:(id)arg1;
- (void)_updatePlaylistsFilterIsCuratorIDStatus;
- (id)folderDetailViewControllerWithEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (void)addQueryFilterPredicate:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *additionalQueryFilterPredicates;
- (void)handleCommitPreviewViewController:(id)arg1 fromViewController:(id)arg2;
- (id)previewViewControllerForEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (_Bool)canPreviewEntityValueContext:(id)arg1;
- (id)loadEntityViewDescriptor;
- (long long)handleSelectionFromUserActivityContext:(id)arg1 containerItem:(id)arg2 entityValueContext:(id)arg3 viewController:(id)arg4;
- (long long)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (void)applyEntityProviderChangeRecords:(id)arg1;
- (_Bool)canDeleteEntityValueContext:(id)arg1;
- (id)initWithPlaylistsFilter:(id)arg1 playlistsConfigurationOptions:(unsigned long long)arg2;
- (id)init;

@end

