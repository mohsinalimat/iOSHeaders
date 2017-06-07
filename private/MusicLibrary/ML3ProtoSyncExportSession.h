//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MusicLibrary/ML3ExportSession.h>

@class MSVStreamWriter, NSString;

@interface ML3ProtoSyncExportSession : ML3ExportSession
{
    NSString *_libraryUUID;
    int _syncType;
    MSVStreamWriter *_streamWriter;
    struct {
        int trackAdds;
        int trackUpdates;
        int trackDeletes;
        int playlistAdds;
        int playlistDeletes;
        unsigned int totalSize;
    } _stats;
    double _sessionStartTime;
}

- (void).cxx_destruct;
- (id)_writSyncPackageToStream:(id)arg1;
- (id)exportPlaylistDeleted:(unsigned long long)arg1;
- (id)exportPlaylistAdded:(unsigned long long)arg1;
- (id)exportTrackDeleted:(unsigned long long)arg1;
- (id)exportTrackUpdated:(unsigned long long)arg1;
- (id)exportTrackAdded:(unsigned long long)arg1;
- (id)end;
- (id)begin:(unsigned int)arg1;
- (id)initWithLibrary:(id)arg1 outputStream:(id)arg2 syncType:(int)arg3;

@end

