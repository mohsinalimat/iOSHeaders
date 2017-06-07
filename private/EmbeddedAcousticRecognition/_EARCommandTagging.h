//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmbeddedAcousticRecognition/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface _EARCommandTagging : NSObject <NSCopying>
{
    struct unique_ptr<quasar::CommandTagging, std::__1::default_delete<quasar::CommandTagging>> _tagging;
    NSString *_commandId;
    NSArray *_tagSequence;
}

@property(readonly, copy, nonatomic) NSArray *tagSequence; // @synthesize tagSequence=_tagSequence;
@property(readonly, copy, nonatomic) NSString *commandId; // @synthesize commandId=_commandId;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)tokensForTag:(id)arg1;
- (id)_initWithQuasarCommandTagging:(const struct CommandTagging *)arg1;

@end

