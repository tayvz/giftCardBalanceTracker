//
//  Card.h
//  Gift Card Balance Tracker
//
//  Created by Ryan D'souza on 6/6/15.
//  Copyright (c) 2015 Ryan D'souza. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol Card <NSObject, NSCoding>

@required
- (instancetype) initWithEverything:(NSString*)cardNumber expirMonth:(NSString*)expirMonth
                          expirYear:(NSString*)expirYear cvvCode:(NSString*)cvvCode;

- (NSURLRequest*) generateBalanceURLRequest;

- (NSString*) startingBalance:(NSData*)webPageData;
- (NSString*) currentBalance:(NSData*)webPageData;

@property (strong, nonatomic, readwrite) NSString *cardNumber;
@property (strong, nonatomic, readwrite) NSString *expirMonth;
@property (strong, nonatomic, readwrite) NSString *expirYear;
@property (strong, nonatomic, readwrite) NSString *cvvCode;

@end