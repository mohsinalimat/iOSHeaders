//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmbeddedAcousticRecognition/NSCopying-Protocol.h>

@class NSArray;

@interface _EARSpeechRecognitionResult : NSObject <NSCopying>
{
    vector_ec3bbdac _quasarTokens;
    vector_ec3bbdac _quasarPreItnTokens;
}

@property(readonly, nonatomic) vector_ec3bbdac quasarPreItnTokens; // @synthesize quasarPreItnTokens=_quasarPreItnTokens;
@property(readonly, nonatomic) vector_ec3bbdac quasarTokens; // @synthesize quasarTokens=_quasarTokens;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *preITNTokens;
@property(readonly, copy, nonatomic) NSArray *tokens;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithTokens:(vector_ec3bbdac)arg1 preITNTokens:(vector_ec3bbdac)arg2;

@end

