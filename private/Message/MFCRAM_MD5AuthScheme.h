//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Message/MFAuthScheme.h>

@interface MFCRAM_MD5AuthScheme : MFAuthScheme
{
}

- (_Bool)canAuthenticateAccountClass:(Class)arg1 connection:(id)arg2;
- (_Bool)hasEncryption;
- (_Bool)sendsPlainTextPasswords;
- (id)humanReadableName;
- (id)name;
- (Class)authenticatorClass;

@end

