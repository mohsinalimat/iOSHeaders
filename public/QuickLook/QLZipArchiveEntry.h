//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSError, NSURL, QLZipArchive;

@interface QLZipArchiveEntry : NSObject
{
    struct archive_entry *_entry;
    NSData *_data;
    NSError *_error;
    QLZipArchive *_archive;
    NSURL *_url;
}

@property(retain) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property __weak QLZipArchive *archive; // @synthesize archive=_archive;
@property struct archive_entry *entry; // @synthesize entry=_entry;
- (void).cxx_destruct;
- (id)readDataWithError:(id *)arg1;

@end

