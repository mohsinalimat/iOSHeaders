//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DiagnosticExtensionsDaemon/NSObject-Protocol.h>

@class DEDAttachmentGroup, NSArray, NSError, NSString;

@protocol DEDClientProtocol <NSObject>
- (void)uploadProgress:(unsigned long long)arg1 total:(unsigned long long)arg2 session:(NSString *)arg3;
- (void)didAdoptFilesWithError:(NSError *)arg1 forSession:(NSString *)arg2;
- (void)hasCollected:(NSArray *)arg1 isCollecting:(NSArray *)arg2 inSession:(NSString *)arg3;
- (void)didCommitSession:(NSString *)arg1;
- (void)finishedDiagnosticWithIdentifier:(NSString *)arg1 result:(DEDAttachmentGroup *)arg2 session:(NSString *)arg3;
- (void)deviceSupportsDiagnosticExtensions:(NSArray *)arg1 session:(NSString *)arg2;
- (void)pongSession:(NSString *)arg1;

@optional
- (void)didCancelSession:(NSString *)arg1;
- (long long)transportType;
@end

