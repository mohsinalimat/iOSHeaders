//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MusicLibrary/ML3ExportSession.h>

@interface ML3DAAPExportSession : ML3ExportSession
{
    unsigned int _currentListingContainerCode;
    unsigned int _currentSongsContainerCode;
    int _updateType;
}

- (void)_endCurrentListingContainer;
- (void)_setListingContainer:(unsigned int)arg1;
- (void)_endCurrentSongsContainer;
- (void)_setSongsContainer:(unsigned int)arg1;
- (id)_playlistExportItemForPersistentId:(long long)arg1;
- (id)_trackExportItemForPersistendId:(long long)arg1;
- (id)exportPlaylistDeleted:(unsigned long long)arg1;
- (id)exportPlaylistAdded:(unsigned long long)arg1;
- (id)exportTrackDeleted:(unsigned long long)arg1;
- (id)exportTrackAdded:(unsigned long long)arg1;
- (id)end;
- (id)begin:(unsigned int)arg1;
- (id)initWithLibrary:(id)arg1 outputStream:(id)arg2 updateType:(int)arg3;

@end

