//
//  TSTPerson.h
//  Test_Project
//
//  Created by Anton Kuznetsov on 6/17/14.
//  Copyright (c) 2014 Anton Kuznetsov. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TSTModel.h"

@interface TSTPerson : TSTModel

@property (nonatomic, strong) NSString *firstName;
@property (nonatomic, strong) NSString *lastName;
@property (nonatomic, readonly) NSString *fullName;
@property (nonatomic, strong) NSString *email;
@property (nonatomic, strong) NSDate *birthDate;
@property (nonatomic, strong) UIImage *photo;


- (BOOL)isEqualToPerson:(TSTPerson *)other;
- (BOOL)validateEmail:(inout NSString **)ioValue error:(out NSError **)outError;
@end
