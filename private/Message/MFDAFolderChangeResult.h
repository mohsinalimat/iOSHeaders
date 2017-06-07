//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString;

@interface MFDAFolderChangeResult : NSObject
{
    NSError *_error;
    NSString *_folderID;
    NSString *_folderName;
    long long _statusCode;
}

@property(readonly) NSString *folderName; // @synthesize folderName=_folderName;
@property(readonly) NSString *folderID; // @synthesize folderID=_folderID;
@property(readonly) NSError *error; // @synthesize error=_error;
@property(readonly) long long statusCode; // @synthesize statusCode=_statusCode;
- (id)description;
- (_Bool)wasSuccessful;
- (void)dealloc;
- (id)initWithStatusCode:(long long)arg1 error:(id)arg2 folderID:(id)arg3 folderName:(id)arg4;

@end

