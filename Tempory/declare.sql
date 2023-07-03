declare
i number;
j number;
procedure evenodd(i in number, j out number)
begin
if(i%2=0)then
j:=0;
else
j:=1;
end if;
end;
