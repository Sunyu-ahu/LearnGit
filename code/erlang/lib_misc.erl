-module(lib_misc).
-export([
            % pythag/1, 
            perms/1
        ]).

% pythag(N) ->
%     [ {A,B,C} ||
%         A <- lists:seq(1,N),
%         B <- lists:seq(1,N),
%         C <- lists:seq(1,N),
%         % lists:seq()返回一个包含1到N所有整数的列表
%         A+B+C =< N,
%         A*A + B*B =:= C*C
%     ],

perms([]) -> [[]] ;
perms(L)  -> [[H|T] || H <- L, T <- perms(L--[H])].